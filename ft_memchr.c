/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:23:02 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:40:13 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It searches for the first occurrence of the character c in 
 * the first n bytes of the string s
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * @param n the number of bytes to be searched
 * 
 * @return A pointer to the first occurence of the character c in the string s.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s2;
	char	c2;

	i = 0;
	c2 = (char)c;
	s2 = (char *)s;
	while (i < n)
	{
		if (s2[i] != c2)
			i++;
		else
			return ((char *)s2 + i);
	}
	return (NULL);
}
