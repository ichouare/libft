/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:26:12 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/22 10:35:43 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void			*arr;
	unsigned int	i;

	i = 0;
	arr = (malloc(size * number));
	if (!arr)
		return (NULL);
	ft_bzero(arr, (number * size));
	return (arr);
}
