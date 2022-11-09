/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:29:03 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/22 22:10:23 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	size;
	unsigned int	i;
	unsigned int	j;

	size = ft_strlen(little);
	i = 0;
	j = 0;
	if (size == 0)
		return ((char *)big);
	if (!big && len == 0)
		return (NULL);
	while (*(big + i) && i < len)
	{
		j = 0;
		while (*(big + i + j) == *(little + j) && i + j < len)
		{
			j++;
			if (j == size)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
