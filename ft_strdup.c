/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:34:35 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/14 21:13:28 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strdup() function allocates sufficient memory for a copy of the string 
*	s1, does the copy, and returns a pointer to it.
*	PARAMETERS
*	#1. The string to duplicate.
*	RETURN VALUES
*	The strdup() function returns thE pointer to the copy of s1.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*src2;

	i = 0;
	src2 = (char *) malloc (ft_strlen(src) * sizeof(char) + 1);
	if (src2 == NULL)
		return (0);
	while (src[i] != '\0')
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

/*
int main (void)
{
    printf("\nTest (simple compilation/free) de ft_calloc;\n");
	char *ptr;
    
	printf("\nTest de ft_strdup :\n");
	ptr = ft_strdup("string");
	printf("'string' : %s\n", ptr);
	free(ptr);
}
*/