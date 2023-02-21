/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:26:18 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:36:57 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It allocates memory for a new string, copies the contents of 
 * the original string into the new string, and returns 
 * a pointer to the new string
 * 
 * @param s1 The string to be copied.
 * 
 * @return A pointer to a new string which is a duplicate of the string s1.
 */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s1);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	while (i != size)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
