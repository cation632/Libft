/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:59:38 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/14 21:13:02 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new string, which is the result of 
*	the concatenation of ’s1’ and ’s2’.
*	PARAMETERS
*	#1. The prefix string.
*	#2. The suffix string.
*	RETURN VALUES
*	The new string. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	p = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!p)
		return (0);
	i = 0;
	j = 0;
	while (s1[j + i] != '\0')
	{
		p[i] = s1[j + i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

/*
int main(void)
{
	printf("\nTest de ft_strjoin :\n");
	printf("abcdef : %s\n",	ft_strjoin("abc", "def"));
	printf("abc : %s\n", ft_strjoin("", "abc"));
	printf("abc : %s\n", ft_strjoin("abc", ""));
	printf("'' : %s\n", ft_strjoin("", ""));
}
*/