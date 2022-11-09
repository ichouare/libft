/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:54:10 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/23 15:32:53 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeallocate(int lenstr, int start, int size)
{
	int	a;

	a = 0;
	if (lenstr > size)
		a = size;
	else
		a = lenstr - start;
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	int		size;

	arr = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		arr = (char *)(ft_calloc(sizeof(char), 1));
		return (arr);
	}
	size = sizeallocate(ft_strlen(s), start, len);
	arr = (char *)(ft_calloc(sizeof(char), (size + 1)));
	if (!arr)
		return (NULL);
	while (size--)
	{
		*(arr + i) = *(s + start + i);
		i++;
	}
	return (arr);
}
