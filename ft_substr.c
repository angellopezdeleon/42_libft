/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:28:20 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:37:28 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the string is NULL, return NULL. If the start is greater than 
 * the length of the string, return an empty string. 
 * If the length plus the start is greater than the length of the string, 
 * set the length to the length of the string minus the start. 
 * Allocate memory for the substring, and if it fails, return NULL. 
 * Otherwise, copy the substring into the allocated memory and return it.
 * 
 * @param s The string to be cut.
 * @param start The starting index of the substring.
 * @param len the maximum number of characters to copy
 * 
 * @return A pointer to a new string.
 */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if ((len + start) > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (j < len)
		str[j++] = s[start++];
	str[j] = '\0';
	return (str);
}
