/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:51:54 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/20 18:09:07 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			lensrc;
	unsigned int	i;

	lensrc = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (lensrc);
	}
	while ((*(src + i) != '\0') && (i < size - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (lensrc);
}
