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
// int main ()
// {
// 	void *p = "1234";
// 	// int i = ft_printf("HolaQuetal [%s] [%%] [%d] [%p] [%x] [%X] [%i][%u][%c]\n","Esto es una string", 1234, p, 1234, 1234, 1234, 1234, 'a');
// 	// printf ("Tu printf da [%d]\n", i);
// 	// i = printf("HolaQuetal [%s] [%%] [%d] [%p] [%x] [%X] [%i][%u][%c]\n","Esto es una string", 1234, p, 1234, 1234, 1234, 1234, 'a');
// 	// printf ("Deberia dar [%d]\n", i);
// 	// printf("BYTES: %d\n", ft_printf("%i\n", -2147483649));
// 	// printf("BYTES: %d\n", printf("%i\n", -2147483649));
// 	int i = ft_printf("(lwd$&:\nfk%x[%c#N\the~,%sw\fZ@8bbI!Y%i6,|Sts(?`\f%i4}[&uFdj\r%u.J<s[\fA%u%Xg47WiM%dP9=`;.)q%d ", -871864553, -350013297, "* ckM:B<[ )Vev&'\"]zmyG^AB|:tT9h2xa/JUo2z >PH2ub'($(Q s%\nH,}+*{x{\ffJ=|2a", -1431523761, 135611837, -1936148, 1421530611, -1716796415, 201878521, 1323404584);
// 	printf("\n\n");
// 	int j = printf("(lwd$&:\nfk%x[%c#N\the~,%sw\fZ@8bbI!Y%i6,|Sts(?`\f%i4}[&uFdj\r%u.J<s[\fA%u%Xg47WiM%dP9=`;.)q%d ", -871864553, -350013297, "* ckM:B<[ )Vev&'\"]zmyG^AB|:tT9h2xa/JUo2z >PH2ub'($(Q s%\nH,}+*{x{\ffJ=|2a", -1431523761, 135611837, -1936148, 1421530611, -1716796415, 201878521, 1323404584);
// 	printf("\n\n\n\n\n%i == %i\n", i, j);
// }