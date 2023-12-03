/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:10:22 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/20 19:10:22 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(unsigned int num, int *counter, char format)
{
	if ((int)num == -2147483648 && format != 'u')
	{
		ft_putnbr_pf(((int)num / 10), counter, format);
		if (*counter == -1)
			return ;
		ft_putchar_pf('8', counter);
	}
	else if ((int)num < 0 && (int)num != -2147483648 && format != 'u')
	{
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(-num, counter, format);
	}
	else
	{
		if (num > 9)
			ft_putnbr_pf((num / 10), counter, format);
		ft_putchar_pf(('0' + num % 10), counter);
	}
	return ;
}
