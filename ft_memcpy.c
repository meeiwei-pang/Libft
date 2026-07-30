/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 09:32:04 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 10:01:25 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "Hellohaha";
	char	dst[] = "helle";
	int		i;
	int		match;

	ft_memcpy(dst, src, 10);

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);

	i = 0;
	match = 1;
	while (i < 10)
	{
		if (src[i] != dst[i])
			match = 0;
		i++;
	}
	printf("Match: %s\n", match ? "YES" : "NO");
	return (0);
}
*/
