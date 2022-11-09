/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:44:32 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/26 13:08:19 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	size;

	size = ft_strlen(str);
	while (size >= 0)
	{
		if (*(str + size) == (char)c)
			return (str + size);
		size--;
	}
	return (0);
}
