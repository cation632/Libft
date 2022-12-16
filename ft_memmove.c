/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:59:43 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/14 18:49:15 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.  
*	The two strings may overlap; the copy is always done in a nondestructive 
*	manner.
*	PARAMETERS
*	#1. The destiny pointer in which to copy.
*	#2. The source pointer to copy.
*	#3. The number of bytes to copy the source string.
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/
// It's safe to use when you have overlaping places in memory
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = (n - 1);
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main(void)
{
	printf("Test de ft_memmove :\n");
	char s1[] = "string test";
	char s2[] = "string test";
	if (!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) && 
	!strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
		printf("OK\n");
	else
		printf("Failed (tests : ft_memmove(s, s + 3, 5) 
		and ft_memmove(s + 3, s, 5)).\n");
}
*/