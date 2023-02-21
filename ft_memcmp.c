/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:25:09 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 12:25:59 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It compares the first n bytes of memory of s1 and s2, 
 * and returns 0 if they are equal, or the difference between 
 * the first two differing bytes
 * 
 * @param s1 This is the first string to be compared.
 * @param s2 The string to compare to.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the two strings.
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1c;
	unsigned char	*s2c;

	i = 0;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (i < n)
	{
		if (s1c[i] == s2c[i])
			i++;
		else
			return (s1c[i] - s2c[i]);
	}
	return (0);
}
