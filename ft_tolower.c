/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 08:33:09 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 08:39:39 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
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
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}
*/
