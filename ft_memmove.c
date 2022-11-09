/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:45:11 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/24 19:05:23 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, void *str2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = str1;
	src = str2;
	if (dest > src)
	{
		while (n--)
			*(dest + n) = *(src + n);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (str1);
}
