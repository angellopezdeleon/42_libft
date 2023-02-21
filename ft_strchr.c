/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:43:33 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 15:46:19 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns a pointer to the first occurrence of 
 * the character c in the string s
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * 
 * @return A pointer to the first occurrence of 
 * the character c in the string s.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
