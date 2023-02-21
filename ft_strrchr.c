/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:46:29 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 15:50:26 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns a pointer to the last occurrence of the character c in the string s
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * 
 * @return A pointer to the last occurrence of the character c in the string s.
 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
