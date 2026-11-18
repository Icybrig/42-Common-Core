/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:04:12 by lfang             #+#    #+#             */
/*   Updated: 2026/11/18 18:15:13 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t datasize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (datasize > 0)
	{
		while (i < datasize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	l;

	l = (unsigned char)c;
	i = ft_strlen(s);
	if (s[i] == l)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == l)
			return ((char *)(s + i));
	}
	return (NULL);
}

static char	*expand_stash(char *stash, size_t len, size_t *caps, size_t add)
{
	char	*tmp;
	size_t	new_caps;
	size_t	i;

	i = 0;
	new_caps = *caps;
	while (len + add + 1 > new_caps)
		new_caps *= 2;
	tmp = malloc(sizeof(char) * new_caps);
	if (!tmp)
		return (free(stash), NULL);
	while (i < len)
	{
		tmp[i] = stash[i];
		i++;
	}
	free(stash);
	*caps = new_caps;
	return (tmp);
}

char	*append_buffer(char *stash, char *buffer, size_t *len, size_t *caps)
{
	size_t	add;

	add = ft_strlen(buffer);
	if (*len + add + 1 > *caps)
		stash = expand_stash(stash, *len, caps, add);
	if (!stash)
		return (NULL);
	ft_strlcpy(stash + *len, buffer, add + 1);
	*len += add;
	return (stash);
}
