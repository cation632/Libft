/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:51:17 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/14 21:13:57 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*	PARAMETERS
*	#1. The string from which to create the substring.
*	#2. The start index of the substring in the string ’s’.
*	#3. The maximum length of the substring.
*	RETURN VALUES
*	The substring. NULL if the allocation fails.
*/
//start onde comeca a copiar na string s
//len quantos carracteres quer copiar

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*k;

	i = 0;
	while ((start + i) < ft_strlen(s) && i < len)
		i++;
	k = (char *) malloc (sizeof(char) * i + 1);
	if (!k)
		return (0);
	i = 0;
	while ((start + i) < ft_strlen(s) && i < len)
	{
		k[i] = s[start + i];
		i++;
	}
	k[i] = '\0';
	return (k);
}

/*
int main(void)
{
    printf("\nTest de ft_substr :\n");
	printf("njo : %s\n", ft_substr("bonjour", 2, 3));
	printf("njour : %s\n", ft_substr("bonjour", 2, 5));
	printf("njour : %s\n", ft_substr("bonjour", 2, 6));
	printf("r : %s\n", ft_substr("bonjour", 6, 1));
	printf("'' : %s\n",	ft_substr("bonjour", 6, 0));
	char stest[100] = "test";
	memset(stest + 6, 'a', 50); 
	printf("'' : %s\n",	ft_substr(stest, 10, 1));
}
*/