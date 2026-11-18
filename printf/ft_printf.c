/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:20:23 by lfang             #+#    #+#             */
/*   Updated: 2026/11/17 13:34:53 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr(va_list *args, char c)
{
	void	*ptr;
	int		count;

	count = 0;
	ptr = va_arg(*args, void *);
	if (ptr == NULL)
		count += write(1, "(nil)", 5);
	else
	{
		count += write(1, "0x", 2);
		count += ft_puthex((unsigned long long)ptr, c);
	}
	return (count);
}

static int	ft_format_print(va_list *args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (c == '%')
		count += write(1, "%", 1);
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		count += ft_putunbr(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(*args, unsigned int), c);
	else if (c == 'p')
		count += ft_ptr(args, c);
	return (count);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format_print(&args, format[i]);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
