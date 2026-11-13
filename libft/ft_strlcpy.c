/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:48:20 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 13:56:16 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "hi there";
// 	int n1 = strlcpy(s2, s1, 9);
// 	printf("strlcpy: %s, return (value: %d\n", s2, n1);
// }