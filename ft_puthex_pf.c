/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:02:18 by evasco-o          #+#    #+#             */
/*   Updated: 2023/12/02 12:17:22 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned long num, int *counter, char *base)
{
	if (num >= 16)
		ft_puthex_pf(num / 16, counter, base);
	if (*counter == -1)
		return ;
	ft_putchar_pf(base[num % 16], counter);
}
