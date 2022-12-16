/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:37:26 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/11/15 20:07:06 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Outputs the character ’c’ to the given file descriptor.
*	PARAMETERS
*	#1. The character to output.
*	#2. The file descriptor on which to write.
*	RETURN VALUES
*	-
*/
// ("1", c, 1)  "" - is file descriptor usealy we use 1
// and that means that the dispplay ountup is on screen

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
