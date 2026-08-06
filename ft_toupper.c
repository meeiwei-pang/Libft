/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 07:22:18 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 08:06:23 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello HAha";
	int	i;

	i = 0;
	while (str[i])
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");
	return(0);
}
*/
