/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:02:00 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 09:30:37 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	buf[11] = "Hellohehe!";
	ft_memset(buf, 'Z', 3);
	printf("%s\n", buf);
	return(0);
}
*/
//notes: memset fill block of memory with a specific byte values, repeat n time
//choose any value to fill in cmp to bzero
//void * cant be indexed byte by byte, so unsigned char * to walk 1 byte..
