/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:43:05 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/16 16:23:30 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Iterates the list ’lst’ and applies the function
*	’f’ on the content of each node. Creates a new
*	list resulting of the successive applications of
*	the function ’f’. The ’del’ function is used to
*	delete the content of a node if needed
*	PARAMETERS
*	#1. The address of a pointer to a node.
*	#2. The address of the function used to iterate on the list.
*	#3. The address of the function used to delete
*	the content of a node if needed.
*	RETURN VALUES
*	The new list.
*	NULL if the allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == 0)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
