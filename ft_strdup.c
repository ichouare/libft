/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:51:32 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/22 21:53:38 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*arr;
	int		i;

	arr = NULL;
	i = 0;
	arr = (char *)malloc((sizeof(char) * ft_strlen(str) + 1));
	if (!arr)
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(arr + i) = *(str + i);
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
