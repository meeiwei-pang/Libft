/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:31:08 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/07/30 08:21:02 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "   ---+--+1234ab567";
	printf("test: %d\n", ft_atoi(str));

	char str1[] = "-2147483649";
	printf("test -2147483649: %d\n", ft_atoi(str1));

	char str2[] = "2147483648";
	printf("test 2147483648: %d\n", ft_atoi(str2));
 	
	char str3[] = "21  abc";
        printf("test 21  abc: %d\n", ft_atoi(str3));

	char str4[] = "!@#123nsa";
	printf("test !@#123nsa: %d\n", ft_atoi(str4));

	char str5[] = "abc123";
        printf("test abc123: %d\n", ft_atoi(str5));

	char str6[] = "abc  ---21";
	printf("test abc  ---21: %d\n", ft_atoi(str6));
}*/
