/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:10:11 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/18 15:40:14 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
* 	Applies the function ’f’ to each character of the ’s’ to create a new 
*	string (with malloc) resulting from successive applications of ’f’.
*	PARAMETERS
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*	RETURN VALUES
*	The string created from the successive applications of ’f’. 
*	Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*g;
	int		i;

	i = 0;
	g = ft_strdup(s);
	if (!g)
		return (0);
	while (g[i])
	{
		g[i] = f(i, g[i]);
		i++;
	}
	return (g);
}
