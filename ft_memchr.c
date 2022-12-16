/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:20:48 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/15 14:33:57 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c (converted to an 
*	unsigned char) in string s.
*	PARAMETERS
*	#1. The pointer in which to check for the occurence of c.
*	#2. The character to check occurence of.
*	#3. The number of bytes to check for any occurence of c in s.
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located, or NULL if no 
*	such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
