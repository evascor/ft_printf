/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:16:03 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:44:07 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	i = 0;
	while (src[i] && (d_len + i) < (dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = 0;
	if (d_len < dstsize)
		return (s_len + d_len);
	return (s_len + dstsize);
}

/*int main()
{
    char *src = "world!";
    char dst[20] = "Hello";

    size_t cat = ft_strlcat(dst, src, sizeof(dst));

    printf("%zu\n", cat); //especificador de formato para size_t
    printf("%s\n", src);
}*/
