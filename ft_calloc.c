/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:24:22 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 18:10:37 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <stdlib.h>
*	DESCRIPTION
*	The calloc() function contiguously allocates enough space for count objects 
*	that are size bytes of memory each and returns a pointer to the allocated 
*	memory.  The allocated memory is filled with bytes of value zero.
*	PARAMETERS
*	#1. The count of objects to allocate.
*	#2. The size of bytes in each object.
*	RETURN VALUES
*	If successful, calloc() function returns a pointer to allocated memory. 
*	If there is an error, they return a NULL pointer.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc (nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
int main(void)
{
	printf("\nTest (simple compilation/free) de ft_calloc;\n");
	char *ptr;
	ptr = ft_calloc(5, sizeof(int));
	free(ptr);
}
*/