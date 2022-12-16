/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:53:11 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:04:37 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*	PARAMETERS
*	#1. the integer to convert.
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_count(int m)
{
	long	h;
	int		i;

	h = m;
	i = 0;
	if (h < 0)
	{
		i++;
		h = -h;
	}
	while (h > 9)
	{
		h = (h / 10);
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long	p;
	char	*s;
	int		i;

	p = n;
	i = ft_count(p);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (0);
	if (p < 0)
	{
		s[0] = '-';
		p = -p;
	}
	s[i--] = '\0';
	if (p == 0)
		s[i] = '0';
	while (p > 0)
	{
		s[i] = ((p % 10) + 48);
		p = (p / 10);
		i--;
	}
	return (s);
}

/* int main(void)
{
 	printf("\nTest de ft_itoa :\n");
 	printf("0 : %s\n", ft_itoa(0));
 	printf("1 : %s\n", ft_itoa(1));
 	printf("-1 : %s\n", ft_itoa(-9));
 	printf("234 : %s\n", ft_itoa(234));
 	printf("-5689 : %s\n", ft_itoa(-5689));
 	printf("2147483647 : %s\n", ft_itoa(2147483647));
	
	printf("-2147483648 : %s\n", ft_itoa(-2147483648));
} */
