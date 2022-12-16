/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:47:30 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:52:26 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	DESCRIPTION
 *	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
 *	specified in ’set’ removed from the beginning and the end of the string.
 *	PARAMETERS
 *	#1. The string to be trimmed.
 *	#2. The reference set of characters to trim.
 *	RETURN VALUES
 *	The trimmed string. NULL if the allocation fails.
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;
	int		x;

	i = 0;
	j = 0;
	if (!set || !s1)
		return (0);
	x = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[x]))
		x--;
	trim = ft_calloc((x - i + 2), sizeof(char));
	if (!trim)
		return (0);
	while (x >= i)
	{
		trim[j++] = s1[i];
		i++;
	}
	trim[j] = '\0';
	return (trim);
}

/*
int main(void)
{
 	printf("\nTest de ft_strtrim :\n");
 	printf("'bonjour' : %s\n", ft_strtrim("bonjour", " "));
 	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour ", " "));
 	printf("'onjour' : '%s'\n", ft_strtrim(" bonjour ", " b"));
 	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour", " "));
 	printf("'bonjour' : '%s'\n", ft_strtrim("bonjour ", " "));
 	printf("'onjou' : '%s'\n", ft_strtrim("bonjour ", "br "));
 	printf("'' : '%s'\n", ft_strtrim("", " "));
 	printf("'test' : '%s'\n", ft_strtrim("test", ""));
 	printf("'te st' : '%s'\n", ft_strtrim(" te st ", " "));
 	printf("'' : '%s'\n", ft_strtrim(" b  ", "b "));
}
*/