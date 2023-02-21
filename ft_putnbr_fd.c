/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:28:21 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 17:33:31 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The above function prints the integer n to the file descriptor fd.
 * 
 * @param n The number to be printed.
 * @param fd The file descriptor of the file to output to.
 */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nl;

	nl = (long int)n;
	if (nl < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl >= 10)
	{
		ft_putnbr_fd((nl / 10), fd);
		nl = nl % 10;
	}
	if (nl < 10)
		ft_putchar_fd((nl + 48), fd);
}
