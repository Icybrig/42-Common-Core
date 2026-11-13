/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:35:47 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 17:26:47 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Hello, World!";
// 	int			c = 'o';
// 	size_t		n = 10;

// 	char	*result1 = (char *)ft_memchr(str, c, n);
// 	char	*result2 = (char *)memchr(str, c, n);

// 	if (result1 != NULL)
// 	printf("ft_memchr: Found '%c' at position: %ld\n", c, result1 - str);
// 	else
// 	printf("ft_memchr: Character '%c' not within the first %zu bytes.\n", c, n);

// 	if (result2 != NULL)
// 	printf("memchr: Found '%c' at position: %ld\n", c, result2 - str);
// 	else
// 	printf("memchr: Character '%c' not within the first %zu bytes.\n", c, n);

// 	return (0);
// }