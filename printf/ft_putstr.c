/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:29:31 by lfang             #+#    #+#             */
/*   Updated: 2026/11/13 18:21:05 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
		count += write(1, &str[i++], 1);
	return (count);
}
