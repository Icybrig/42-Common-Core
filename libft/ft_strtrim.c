/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:26:25 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:29:24 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	res = (char *)malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char	s1[] = "   ...Hello.   ";
// 	char	s2[] = " .,";
// 	char	*res;

// 	res = ft_strtrim(s1, s2);
// 	printf("%s\n", res);
// 	printf("%zu\n", ft_strlen(res));
// }