/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:26:43 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:28 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	if (argc != 4)
		return = 1;

	const char *string = argv[1];
	char	character = argv[2][0];
	size_t	len = ft_atoi(argv[3]);

	void *search = ft_memchr(string, character, len);

	if (search !=)
		printf("%p\n", search);
	else
		printf("NULL\n");
}*/
