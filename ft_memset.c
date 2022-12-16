/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:35:21 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:56:11 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memset() function writes len bytes of value c (converted to an 
*	unsigned char) to the string b.
*	PARAMETERS
*	#1. The destiny pointer in which to write.
*	#2. The character to write.
*	#3. The number of bytes to write.
*	RETURN VALUES
*	The memset() function returns its first argument.  
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int		main(void)
{
	printf("Test de ft_memset :\n");
	char s[100] = "aaaaa";
	char sbis[100] = "aaaaa";
	if (!strcmp(memset(s, 'z', 3), ft_memset(sbis, 'z', 3)))
		printf("OK\n");
	else
		printf("Failed : expected '%s', got '%s'.\n", s, sbis);
}
*/