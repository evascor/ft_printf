/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:28:26 by evasco-o          #+#    #+#             */
/*   Updated: 2023/12/02 12:14:26 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, int *counter)
{
	if (num >= 10)
		ft_putuint_pf(num / 10, counter);
	if (*counter == -1)
		return ;
	ft_putchar_pf(num % 10, counter);
}
