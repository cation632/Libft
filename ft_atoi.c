/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:28:53 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:02:53 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *ptr)
{
	int	x;
	int	signal;
	int	result;

	x = 0;
	signal = 1;
	result = 0;
	while ((ptr[x] >= 9 && ptr[x] <= 13) || ptr[x] == 32)
		x++;
	if (ptr[x] == 45)
	{
		signal = -signal;
		x++;
	}
	else if (ptr[x] == 43)
		x++;
	while (ptr[x] >= 48 && ptr[x] <= 57)
	{
		result = ((ptr[x] - 48) + (result * 10));
		x++;
	}
	result *= signal;
	return (result);
}

/*
int	main(void)
{
	char s[] = "++1";
	printf("%d", ft_atoi(s));
}
*/