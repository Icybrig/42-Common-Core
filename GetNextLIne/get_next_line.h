/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 11:59:50 by lfang             #+#    #+#             */
/*   Updated: 2026/11/18 18:17:07 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t datasize);
char	*append_buffer(char *stash, char *buffer, size_t *len, size_t *caps);

#endif