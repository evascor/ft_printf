/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:22:32 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:36 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s < d)
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int	main()
{
	char	dst[] = "Hola";
	char	src[] = "Hi";

	printf("%s\n", ft_memmove(dst, src, 2));
	return (0);
}*/
