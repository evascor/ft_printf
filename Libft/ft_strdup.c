/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:41:05 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:59 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)s[i];
		i++;
	}
	return (ptr);
}

/*int	main()
{
	const char	*string = "Hola";

	char	*dup = ft_strdup(string);

	printf("%s", ft_strdup(dup));
	free(dup);
	return (0);
}*/
