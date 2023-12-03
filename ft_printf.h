/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:11:31 by evasco-o          #+#    #+#             */
/*   Updated: 2023/12/03 11:37:33 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./Libft/libft.h"

int			ft_printf(char const *format, ...);
void		ft_putchar_pf(int c, int *counter);
void		ft_putstr_pf(char *str, int *counter);
void		ft_putnbr_pf(unsigned int num, int *counter, char format);
void		ft_puthex_pf(unsigned long num, int *counter, char *base);

#endif
