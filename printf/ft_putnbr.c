/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:25:38 by lfang             #+#    #+#             */
/*   Updated: 2026/11/13 18:12:41 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	long	nbr;

	count = 0;
	nbr = n;
	if (n < 0)
	{
		count += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putnbr(nbr % 10);
	}
	else
		count += ft_putchar(nbr + '0');
	return (count);
}

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putunbr(n / 10);
		count += ft_putunbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
