/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:15:28 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 20:38:06 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a string and a function pointer, and returns a new string where 
 * each character is the result of the function applied 
 * to the original character
 * 
 * @param s The string to map.
 * @param f The function to be applied to each character of the string.
 * 
 * @return A pointer to a new string, which is the result of applying the 
 * function f to each character of the string given as argument.
 */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		len;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = ((*f)(i, s[i]));
		i++;
	}
	result[i] = '\0';
	return (result);
}
