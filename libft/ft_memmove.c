/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:27:01 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 13:35:34 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*r;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	r = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (r > s)
	{
		while (n--)
		{
			r[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			r[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "abcde";
// 	char	str2[] = "12345";
// 	size_t	size;

// 	size = sizeof(char) * 4;
// 	ft_memmove(str1 + 2, str2, size);
// 	printf("%s\n", str1);
// }
