/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:17:11 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:57 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

/*int main(int argc, char **argv)
{
    if (argc >= 3)
    {
        char character = argv[2][0];
        char *result = ft_strchr(argv[1], character);
        if (result)
            printf("%s\n", result);
        else
            printf("%s\n", "NULL");
        return 0;
    }
}*/
