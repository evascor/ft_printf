/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:34:59 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:46 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		num[10];
	int			index;
	long int	nb;

	nb = n;
	index = 0;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		num[index] = nb % 10 + '0';
		nb /= 10;
		index++;
	}
	while (index > 0)
	{
		index--;
		write(fd, &num[index], 1);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	return (0);
}*/
