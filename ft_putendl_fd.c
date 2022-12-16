/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:46:26 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:05:49 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Outputs the integer ’n’ to the given file descriptor.
*	PARAMETERS
*	#1. The string to output.
*	#2. The file descriptor on which to write.
*	RETURN VALUES
*	-
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int main()
{
	ft_putendl_fd("abcsf", 1);
}
*/