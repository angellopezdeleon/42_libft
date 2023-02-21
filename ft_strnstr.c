/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:52:42 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:36:02 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It iterates through the haystack, and if it finds a character 
 * that matches the first character of the needle, it iterates through 
 * the needle to see if the needle is a substring of the haystack
 * 
 * @param haystack The string to search in
 * @param needle the string to find
 * @param len the maximum number of characters to search
 * 
 * @return A pointer to the first occurrence of the substring needle 
 * in the string haystack, or a null pointer if the substring is not found.
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (j < len && haystack[j])
	{
		if (needle[i] != haystack[j])
			j++;
		else if (needle[i] == haystack[j])
		{
			while (needle[i++] == haystack[j++])
			{
				if (j > len)
					break ;
				else if (i == ft_strlen(needle))
					return ((char *) haystack + (j - i));
			}
			j = (j + 1) - i;
			i = 0;
		}
	}
	return (NULL);
}
