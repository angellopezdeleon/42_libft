/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:26:01 by anglopez          #+#    #+#             */
/*   Updated: 2022/08/04 19:48:14 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the character is a digit, return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
