/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:08:43 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:47:21 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It compares the first n characters of two strings, and returns 0 
 * if they are equal, a positive number if the first string is greater 
 * than the second, and a negative number if the first string 
 * is less than the second
 * 
 * @param s1 The first string to be compared.
 * @param s2 The string to compare to s1.
 * @param n The maximum number of characters to compare.
 * 
 * @return The difference between the first two characters that differ 
 * in the strings being compared.
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (!s1[i])
		return (-s2[i]);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
