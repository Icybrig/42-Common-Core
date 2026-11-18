/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:31:23 by lfang             #+#    #+#             */
/*   Updated: 2026/11/13 19:32:01 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, c);
		count += ft_puthex(n % 16, c);
	}
	else
	{
		if (n < 10)
			count += ft_putchar(n + '0');
		else
		{
			if (c == 'x')
				count += ft_putchar(n - 10 + 'a');
			else if (c == 'X')
				count += ft_putchar(n - 10 + 'A');
			else if (c == 'p')
				count += ft_putchar(n - 10 + 'a');
		}
	}
	return (count);
}
