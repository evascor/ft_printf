/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:21:59 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:01 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	testing_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
		write(1, c, 1);
}

int main(void)
{
	char	*iteri = "h/o/l/a";
	ft_striteri(iteri, testing_func);
	return (0);
}*/
