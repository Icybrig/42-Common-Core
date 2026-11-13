/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:11:57 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:15:12 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("Org: %s\n", strnstr("DACCAABC", "DA", 2));
// 	printf("Test: %s\n", ft_strnstr("DACCAABC", "DA", 2));
// 	printf("Org: %s\n", strnstr("DACCAABC", "DB", 3));
// 	printf("Test: %s\n", ft_strnstr("DACCAABC", "DB", 3));
// }