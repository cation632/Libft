/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:08:23 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/16 15:57:38 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new element. The variable ’content’ 
*	is initialized with the value of the parameter ’content’. The variable 
*	’next’ is initialized to NULL.
*	PARAMETERS
*	#1. The content to create the new element with.
*	RETURN VALUES
*	The new element.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/* 
int main(void)
{
	printf("\nBONUS LISTS !\n");
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);
	printf("Test de ft_lstnew :\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");
}
 */