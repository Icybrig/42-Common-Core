/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:12:46 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:02:54 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Org: %s\n", strchr("AAABC", 'A'));
// 	printf("Test: %s\n", ft_strchr("AAABC", 'A'));
// 	printf("Org: %s\n", strchr("AAABC", 'B'));
// 	printf("Test: %s\n", ft_strchr("AAABC", 'B'));
// 	printf("Org: %s\n", strchr("AAABC", '\0'));
// 	printf("Test: %s\n", ft_strchr("AAABC", '\0'));
// }