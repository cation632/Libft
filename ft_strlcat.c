/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:26:34 by cmaria-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:59:49 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	strlcat() appends string src to the end of dst.  It will append at most 
*	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
*	dstsize is 0 or the original dst string was longer than dstsize (in practice 
*	this should not happen as it means that either dstsize is incorrect or that 
*	dst is not a proper string).
*	PARAMETERS
*	#1. The destiny string in which to concatenate.
*	#2. The source string to concatenate.
*	#3. The total number of bytes in destiny.
*	RETURN VALUES
*	the strlcat() function returns the length of the string it tried to create.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	dlen;
	size_t	slen;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	dlen = i;
	slen = ft_strlen((char *)src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[c] != '\0' && c < (size - dlen - 1))
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dlen + slen);
}

/*
int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%li \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}	
*/