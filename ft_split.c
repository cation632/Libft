/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:59:30 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:03:59 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	DESCRIPTION
 *	Allocates (with malloc(3)) and returns an array of strings obtained by
 *	splitting ’s’ using the character ’c’ as a delimiter. The array must be
 *	ended by a NULL pointer.
 *	PARAMETERS
 *	#1. The string to be split.
 *	#2. The delimiter character.
 *	RETURN VALUES
 *	The array of new strings resulting from the split.
 *	NULL if the allocation fails.
 */

#include "libft.h"

static	int	wordcount(char const *str, char separ)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != separ && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == separ)
			flag = 0;
		str++;
	}
	return (i);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wordsize;
	char	**newstr;
	int		j;
	int		strsize;

	i = 0;
	j = 0;
	wordsize = wordcount(s, c);
	newstr = malloc((wordsize + 1) * sizeof(char *));
	if (!newstr)
		return (NULL);
	while (j < wordsize)
	{
		while (s[i] == c)
			i++;
		strsize = ft_size_word(s, c, i);
		newstr[j] = ft_substr(s, i, strsize);
		i += strsize;
		j++;
	}
	newstr[j] = NULL;
	return (newstr);
}
