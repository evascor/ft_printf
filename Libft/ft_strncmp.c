/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:40:06 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:19 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--len;
	}
	if (len == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*int main()
{
	char	string1[] = "Hola";
	char	string2[] = "Adios";
	size_t	len = 3;

	printf("%d", ft_strncmp(string1, string2, len));
}*/
