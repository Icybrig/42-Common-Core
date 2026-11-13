/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:36:46 by lfang             #+#    #+#             */
/*   Updated: 2026/11/04 17:36:24 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include "libft.h"

// int	main()
// {
// 	char	str[] = "Hello, World!";
// 	ft_bzero(str, 5);
// 	printf("%s\n", str); // Output: ", World!"
// }