/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:00:39 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:41:58 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main()
{
	size_t	num_elem = 5;
	size_t	size_elem = sizeof(int);
	int	*arr;

	arr = (int *)ft_calloc(num_elem, size_elem);

	if (arr == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	printf("Contenido del arreglo:\n");
	
	size_t	i = 0;
	while (i < num_elem)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
