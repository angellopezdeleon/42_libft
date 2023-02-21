/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:02:10 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/28 12:48:46 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It takes a string, and returns an integer
 * 
 * @param str This is the string that is to be converted to an integer.
 * 
 * @return the number found in the string.
 */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + ((str[i++] - '0') % 10);
		if (nb < -2147483648 && sign == -1)
			return (0);
		if (nb > 2147483647 && sign == 1)
			return (-1);
	}
	return (nb * sign);
}
