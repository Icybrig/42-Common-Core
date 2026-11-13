/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:22:52 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:26:11 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, i + 1);
	ft_strlcat(res, s2, i + j + 1);
	return (res);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char s1[] = "Hello";
// 	char s2[] = "world";
// 	char *res;

// 	res = ft_strjoin(s1, s2);
// 	printf("%s\n", res);
// 	printf("%zu\n", ft_strlen(res));
// }