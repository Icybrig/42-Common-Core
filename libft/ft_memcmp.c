/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:38:24 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 13:48:04 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	size_t	n;
// 	int		result1;
// 	int		result2;

// 	str1 = "Hallo, World!";
// 	str2 = "Hbllo, World!";
// 	n = 13;
// 	result1 = ft_memcmp(str1, str2, n);
// 	result2 = memcmp(str1, str2, n);
// 	printf("ft_memcmp result: %d\n", result1);
// 	printf("memcmp result: %d\n", result2);
// 	return (0);
// }
