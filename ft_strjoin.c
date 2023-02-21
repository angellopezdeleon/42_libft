/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:03:11 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:37:05 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes two strings, concatenates them, and returns the result
 * 
 * @param s1 The first string to be joined.
 * @param s2 The string to be appended to the end of s1.
 * 
 * @return A pointer to a new string, which is the result 
 * of the concatenation of s1 and s2.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		while (i < ft_strlen(s1))
		{
			str[i] = s1[i];
			i++;
		}
		while (j < ft_strlen(s2))
			str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
