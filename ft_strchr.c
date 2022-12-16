/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:45:59 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:00:44 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	PARAMETERS
*	#1. The string in which to checks for the occurence of c.
*	#2. The character to check the occurence of.
*	RETURN VALUES
*	The function strchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *str, int ch)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == (unsigned char)ch)
			return ((char *)str + x);
		x++;
	}
	if (str[x] == '\0' && (unsigned char)ch == '\0')
		return ((char *)str + x);
	return (0);
}

/*
int main(void)
{
	printf("\nTest de ft_strchr :\n");
	char *str = "strinrg";
	printf("%p : %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	printf("%p : %p\n", strchr(str, '\0'), ft_strchr(str, '\0'));
	printf("%p : %p\n", strchr(str, 's'), ft_strchr(str, 's'));
	printf("%p : %p\n", strchr(str, 'g'), ft_strchr(str, 'g'));
}
*/
