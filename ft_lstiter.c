/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:14:12 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/23 15:31:01 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		count;
	int		i;
	t_list	*temp;

	if (!lst || !f)
		return ;
	i = 0;
	count = ft_lstsize(lst);
	temp = lst;
	while (i < count)
	{
		f(lst->content);
		lst = lst->next;
		i++;
	}
}
