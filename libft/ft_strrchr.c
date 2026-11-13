/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:03:20 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:07:20 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Org: %s\n", strrchr("AAABC", 'A'));
// 	printf("Test: %s\n", ft_strrchr("AAABC", 'A'));
// 	printf("Org: %s\n", strrchr("AAABC", 'B'));
// 	printf("Test: %s\n", ft_strrchr("AAABC", 'B'));
// 	printf("Org: %s\n", strrchr("AAABC", '\0'));
// 	printf("Test: %s\n", ft_strrchr("AAABC", '\0'));
// }