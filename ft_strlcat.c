/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:28:59 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/26 18:14:34 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	sizesrc;
	unsigned int	sizedst;
	unsigned int	i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (!dest && size == 0)
		return (sizesrc);
	sizedst = ft_strlen(dest);
	if (sizedst >= size)
		return (sizesrc + size);
	else
	{
		while ((*(src + i) != '\0') && (i < (size - sizedst - 1)))
		{
			*(dest + sizedst + i) = *(src + i);
			i++;
		}
		*(dest + sizedst + i) = '\0';
	}
	return (sizedst + sizesrc);
}
