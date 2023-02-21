/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:26:30 by anglopez          #+#    #+#             */
/*   Updated: 2022/07/25 17:26:41 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Write a character to a file descriptor
 * 
 * @param c the character to print
 * @param fd The file descriptor to write to.
 */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
