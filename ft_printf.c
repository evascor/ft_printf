/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:27:24 by evasco-o          #+#    #+#             */
/*   Updated: 2023/12/03 12:41:19 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list args, char *str, int *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(args, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(args, char *), counter);
	else if (*str == 'p')
	{
		ft_putstr_pf("0x", counter);
		ft_puthex_pf(va_arg(args, unsigned long), counter,
			"0123456789abcdef");
	}
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_pf(va_arg(args, int), counter, 'i');
	else if (*str == 'u')
		ft_putnbr_pf(va_arg(args, unsigned int), counter, 'u');
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(args, unsigned int), counter,
				"0123456789abcdef");
		else
			ft_puthex_pf(va_arg(args, unsigned int), counter,
				"0123456789ABCDEF");
	}
	else if (*str == '%')
		ft_putchar_pf('%', counter);
}

int	ft_printf(char const *format, ...)
{
	va_list		args;
	int			counter;

	if (!format)
		return (0);
	counter = 0;
	va_start(args, format);
	while (*format && counter != -1)
	{
		if (*format == '%')
		{
			format++;
			ft_format(args, (char *)format, &counter);
		}
		else
			ft_putchar_pf(*format, &counter);
		if (*format)
			format++;
	}
	va_end(args);
	return (counter);
}
