/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:31:47 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/20 18:31:47 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(int c, int *counter)
{
	if (*counter != -1)
	{
		if (write(1, &c, 1) == -1)
			*counter = -1;
		else
			(*counter)++;
	}
}
