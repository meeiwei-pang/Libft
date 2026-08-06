/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 16:00:36 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/02 14:48:51 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char*)s;
	size_t			i;

	i = 0;
	ptr =  (unsigned char *)s;
	while (i < n)
	{ 
		if (ptr[i] == (unsigned char)c)
			return ((void*)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	buf[] = "Hello";
	printf("%s\n", (char *)ft_memchr(buf, 'l', 5));
	return (0);
}
*/
//scan the initial n bytes of memory area pointed to by s for 1st intance c
//both c and the bytes of memory area pointes to by s = unsigned char
//return a pointer to thematching byte or NULL
//ptr+i - calculate new memory address
