/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:38:22 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/24 18:46:55 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*destm;
	unsigned char	*srcm;
	unsigned int	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destm = dest;
	srcm = (unsigned char *)src;
	while (i < size)
	{
		destm[i] = srcm[i];
		i++;
	}
	return (dest);
}
