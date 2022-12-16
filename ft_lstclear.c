/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:49:01 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/16 16:19:34 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Deletes and frees the given element and every successor of that element, 
*	using the function ’del’ and free(3). Finally, the pointer to the list must 
*	be set to NULL.
*	PARAMETERS
*	#1. The adress of a pointer to an element.
*	#2. The adress of the function used to delete the content of the element.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	lst = NULL;
}
