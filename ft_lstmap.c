/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:29:38 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/26 16:57:45 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*newlist;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	ptr = lst;
	newlist = NULL;
	temp = NULL;
	while (ptr != NULL)
	{
		newlist = ft_lstnew(f(ptr->content));
		if (!newlist)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		ft_lstadd_back(&temp, newlist);
		ptr = ptr->next;
	}
	return (temp);
}
