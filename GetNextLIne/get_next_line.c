/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:57:51 by lfang             #+#    #+#             */
/*   Updated: 2026/11/18 18:18:07 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char *stash)
{
	char	*line;
	size_t	len;
	size_t	i;

	if (!stash || !stash[0])
		return (NULL);
	len = 0;
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = malloc(len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (i < len)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static void	update_stash(char *stash)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	j = 0;
	while (stash[i])
		stash[j++] = stash[i++];
	stash[j] = '\0';
}

static char	*read_stash(int fd, char *stash, size_t *len, size_t *caps)
{
	char	*buffer;
	ssize_t	bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(stash), NULL);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(buffer), free(stash), NULL);
		buffer[bytes] = '\0';
		if (bytes == 0)
			break ;
		stash = append_buffer(stash, buffer, len, caps);
		if (!stash)
			return (free(buffer), NULL);
		if (ft_strrchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char		*stash;
	static size_t	len;
	static size_t	caps;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
	{
		caps = BUFFER_SIZE + 1;
		stash = malloc(caps);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
		len = 0;
	}
	stash = read_stash(fd, stash, &len, &caps);
	if (!stash)
		return (len = 0, caps = 0, NULL);
	line = extract_line(stash);
	if (!line)
		return (free(stash), stash = NULL, len = 0, caps = 0, NULL);
	update_stash(stash);
	len = ft_strlen(stash);
	return (line);
}
