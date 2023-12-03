/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 03:43:13 by evasco-o          #+#    #+#             */
/*   Updated: 2023/11/06 11:43:54 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(const char *str, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i + 1] == c && str[i] != c)
			count++;
		i++;
	}
	if (i > 1 && str[i - 1] != c && c != 0)
		return (count + 1);
	return (count);
}

static	int	count_char(const char *str, int j, char c)
{
	int	count;

	count = 0;
	while (str[j] && str[j] != c)
	{
		j++;
		count++;
	}
	return (count);
}

static	int	make_words(char **result, const char *str, char c, size_t words)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (i < words)
	{
		k = 0;
		while (str[j] && str[j] == c)
			j++;
		result[i] = malloc(sizeof(char) * (count_char(str, j, c) + 1));
		if (!result[i])
			return (0);
		while (str[j] != c && str[j])
		{
			result[i][k] = str[j];
			k++;
			j++;
		}
		result[i][k] = '\0';
		i++;
	}
	result[i] = NULL;
	return (1);
}

static	char	**free_tab(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		result[i] = NULL;
		i++;
	}
	free (result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	if (!make_words(result, s, c, words))
		return (free_tab(result));
	return (result);
}

/*int	main()
{
	const char	*s = "Hola como estas";
	char		c = ' ';
	char		**chop = ft_split(s, c);

	printf("%s\n%s\n%s\n", chop[0], chop[1], chop[2]);
	free(chop);

	return (0);
}*/
