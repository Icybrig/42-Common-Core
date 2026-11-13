/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:56:30 by lfang             #+#    #+#             */
/*   Updated: 2026/11/12 16:56:21 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
	{
		dst_len = size;
		return (size + src_len);
	}
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[20] = "Hello, ";
// 	char s2[] = "World!";
// 	size_t n1 = strlcat(s1, s2, 10);
// 	printf("strlcat: %s, return (value: %zu)\n", s1, n1);

// 	char s3[20] = "Hello, ";
// 	char s4[] = "World!";
// 	size_t n2 = ft_strlcat(s3, s4, 10);
// 	printf("ft_strlcat: %s, return (value: %zu)\n", s3, n2);

// 	return (0);
// }