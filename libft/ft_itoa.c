/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:29:47 by lfang             #+#    #+#             */
/*   Updated: 2026/11/07 16:33:37 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	num;

	num = n;
	len = count_digits(num);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	if (num == 0)
		res[0] = '0';
	while (num != 0)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (res);
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(__INT32_MAX__));
// 	printf("%s\n", ft_itoa(-__INT32_MAX__));
// }