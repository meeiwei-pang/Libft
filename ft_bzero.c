/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 08:40:44 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 09:19:37 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	buf[10] = "Hellohaha!";
	int	i;

	printf("Before: %s\n", buf);
	ft_bzero(buf, 5);
	printf("After: ");
	i = 0;
	while (i < 10)
	{
		printf("[%d]", buf[i]);
		i++;
	}
	printf("\n");
}
*/
//note:s-pointer to the starting adrs if the memory block; 
//n-no. of bytes to fill with zeros
//bzero: manually clean memory and set every bytes to 0
//unsigned char *: 1 byte; n -  byte count
