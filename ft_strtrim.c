/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:03:20 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/29 17:34:46 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*arr;
	char	*set1;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	set1 = (char *)set;
	i = 0;
	j = ft_strlen(str) - 1;
	while (ft_strchr(set1, *(str + i)) != 0)
		i++;
	while (ft_strchr(set1, *(str + j)) != 0)
		j--;
	if (j < i)
		arr = ft_substr(str, i, (i - j + 1));
	else
		arr = ft_substr(str, i, (j - i + 1));
	return (arr);
}
