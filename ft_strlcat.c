/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:19:15 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/02 16:21:55 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (dst[dstlen] != '\0')
		dstlen++;
	if (dstlen > size)
		return (size + srclen);
	if (size == 0)
		return (dstlen);
	while (i < (size - srclen - 1) && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	return (dstlen + srclen);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hahaha";
	printf("%zu\n", ft_strlcat(s1, s2, 0));
	
	char s3[] = "abcde";
	printf("%zu\n", strlcat(s3, s2, 0));
	return (0);
}
*/	
//dst and src must \0; append src to the end of dst
//append at most size-strlen(dst) - 1 bytes, \0 the result
//return len dst+src
/*calculate srclen;calculate dstlen without overrunning size
if size is less than or = destlen, truncation cant happen
the source cant be appended, return size+srclen
append src to dest
null-terminate the result
return dstlen + srclen
*/
