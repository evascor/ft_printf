/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:31:16 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:17 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			size;
	unsigned int	i;

	size = ft_strlen(s);
	result = malloc(sizeof(char) * size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[size] = '\0';
	return (result);
}

/*char	testing_func(unsigned int i, char c)
{
	return (c + i);
}

int	main()
{
	char	*mapi = "hnfsfj^";
	char	*result = ft_strmapi(mapi, testing_func);

	printf("%s\n\n", result);
	free(result);
	return (0);
}*/
