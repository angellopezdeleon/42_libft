/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:24:02 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/28 14:09:28 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It applies the function f to each character of the string passed as argument, 
 * and passing its index as first argument
 * 
 * @param s The string to iterate through.
 * @param f The function to be applied to each character of the string.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			((*f)(i, &s[i]));
			i++;
		}
	}
}
