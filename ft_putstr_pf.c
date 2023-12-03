/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:35:17 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/20 18:35:17 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, int *counter)
{
	if (!str)
		str = "(null)";
	while (*str && *counter != -1)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
