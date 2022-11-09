/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:26:22 by ichouare          #+#    #+#             */
/*   Updated: 2022/10/22 10:53:12 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		del(ptr->content);
		temp = ptr;
		ptr = ptr->next ;
		free(temp);
	}	
	*lst = NULL;
}
