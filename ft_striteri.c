/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:12:19 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/18 15:32:53 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Applies the function f to each character of the string passed as argument, 
*	and passing its index as first argument. Each character is passed by
*	address to f to be modified if necessary.
*	PARAMETERS
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
