/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:43:44 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:47:57 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function returns 1 if the character is an ASCII character, 
 * and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is between 0 and 127, 0 otherwise.
 */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
