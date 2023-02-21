/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:09:49 by anglopez          #+#    #+#             */
/*   Updated: 2022/11/17 08:51:33 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It splits a string into an array of strings, using a delimiter
 * 
 * @param s The string to be split.
 * @param c the character to split the string by
 * 
 * @return A pointer to a pointer to a char.
 */

#include "libft.h"
#include <stdlib.h>

static	int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
			j++;
		else
		{
			while (s[j] != c && s[j] != '\0')
				j++;
			i++;
		}
	}
	return (i);
}

static	void	clear_split(char **result, int size)
{
	while (size-- > 0)
		free(result[size]);
	free(result);
}

static	void	divide(char **result, int words, char const *s, char c)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (size < words)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			++j;
		result[size++] = ft_substr(s, i, (j - i));
		i = j;
		if (result[size - 1] == NULL)
		{
			clear_split(result, size);
			break ;
		}
	}
	result[size] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	divide(result, words, s, c);
	return (result);
}
