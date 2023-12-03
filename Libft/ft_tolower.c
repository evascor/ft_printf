/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:33:57 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:34 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
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
