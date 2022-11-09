/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:05:28 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/28 14:47:51 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*str2;
	unsigned char	*str1;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)b1;
	str2 = (unsigned char *)b2;
	if (len == 0)
		return (0);
	while (*(str1 + i) == *(str2 + i) && (i < len - 1))
		i++;
	return (*(str1 + i) - *(str2 + i));
}
