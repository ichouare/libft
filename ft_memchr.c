/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:43:59 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/26 18:12:01 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)b;
	i = 0;
	while (len--)
	{
		if (*(str + i) == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}
