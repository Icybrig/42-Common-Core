/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:23:00 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 17:26:26 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > __INT_MAX__ / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *p1 = ft_calloc(0, 0);
// 	char *p2 = calloc(0, 0);
// 	printf("%s\n", p1);
// 	printf("%s", p2);
//     free(p1);
//     free(p2);
// }