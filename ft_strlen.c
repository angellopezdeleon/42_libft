/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:54:11 by anglopez          #+#    #+#             */
/*   Updated: 2022/06/15 19:56:19 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns the length of a string
 * 
 * @param s This is the string we want to find the length of.
 * 
 * @return The length of the string.
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
