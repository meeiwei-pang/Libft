/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:51:35 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:15:29 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1 = (const unsigned char *)s1;
	const unsigned char	*ptr2 = (const unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "AABB";
	char s2[] = "AACC";
	printf("%d\n", ft_memcmp(s1, s2, 2));
}
*/
//compare first n bytes (unsigned char)of the memory area s1 and s2
//return <, = or >0
