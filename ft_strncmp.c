/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:44:13 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/22 22:10:15 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	if (len == 0 && !p1 && !p2)
		return (0);
	while (len-- && (*p1 || *p2))
	{
		if (*p1 > *p2)
			return (*p1 - *p2);
		if (*p1 < *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
