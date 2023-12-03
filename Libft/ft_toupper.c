/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:52:17 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:39 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int main(int argc, char **argv)
{
	if (argc >=2)
	{
		char	letter = argv[argc - 1][0];
		printf("%c", ft_toupper(letter));
	}
	return 0;
}*/
