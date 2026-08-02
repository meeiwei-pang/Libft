/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 13:35:20 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/02 14:26:40 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size == 0)
		return (srclen);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "craving";
	char	str2[] = "kimchi";
	printf("%zu\n", ft_strlcpy(str1, str2, 10));
	return (0);
}
*/
//notes: strlcpy write null terminator into last byte of dst
//copy up to size-1 from the \0 str src to dst
//return total length of str
//strlcpy = len of src; prevent buffer overflow; check truncation
