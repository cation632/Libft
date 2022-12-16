/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:33:13 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:01:44 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf("\nTest de ft_memcmp : \n");
	printf("0 : %d\n", ft_memcmp("test", "test", 4));
	printf("negatif : %d\n", ft_memcmp("test", "test2", 5));
	printf("0 : %d\n", ft_memcmp("test", "test2", 4));
	printf("positif : %d\n", ft_memcmp("\200", "\0", 4));
	printf("positif : %d\n", ft_memcmp("tesu", "test", 6));
}
*/