/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:35:05 by lfang             #+#    #+#             */
/*   Updated: 2026/11/04 17:36:24 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *v, int c, size_t len)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	res = (unsigned char *)v;
	while (i < len)
	{
		res[i] = (unsigned char)c;
		i++;
	}
	return (v);
}

// #include <stdio.h>
// #include "libft.h"

// int	main()
// {
// 	char	str[] = "Hello, World!";
// 	printf("%s\n", ft_memset(str, '*', 5)); // Output: "***** World!"
// }