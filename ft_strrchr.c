/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:54:12 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:01:12 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the last occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	PARAMETERS
*	#1. The string in which to check the occurence of c.
*	#2. The character to check the occurence of.
*	RETURN VALUES
*	The function strrchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}

/*
int main(void)
{
	printf("\nTest de ft_strrchr :\n");
	char *str = "strinrg";
	printf("%p : %p\n", strrchr(str, '\0'), ft_strrchr(str, '\0'));
	printf("%p : %p\n", strrchr(str, 'r'), ft_strrchr(str, 'r'));
}
*/
