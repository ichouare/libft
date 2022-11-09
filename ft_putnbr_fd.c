/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:09:46 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/20 15:55:17 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648\n", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd((n * (-1)), fd);
	}
	else
	{
		if (n < 10)
		{
			ft_putchar_fd((n + '0'), fd);
			return ;
		}
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}
