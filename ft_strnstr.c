/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 22:56:39 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:19:54 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	*result;
	char	*ori;

	//Test 1: match and ori
	result = ft_strnstr("hello world", "world", 11);
	ori = strnstr("hello world", "world", 11);
	printf("test 1: %s, %s\n", result ? result : "NULL", ori ? ori : "NULL");
	//Test 2: match the first word
	result = ft_strnstr("hello world", "hello", 11);
	printf("test 2: %s\n", result ? result : "NULL");
	//Test 3: no match
	result = ft_strnstr("hello world", "xyz", 11);
	printf("test 3: %s\n", result ? result : "NULL");
	//Test 4: little is empty
	result = ft_strnstr("hello world", "", 11);
	printf("test 4: %s\n", result ? result : "NULL");
	//Test 5: len cutt off the match
	result = ft_strnstr("hello world", "world", 2);
	printf("test 5: %s\n", result ? result : "NULL");
	//Test 6: little > big
	result = ft_strnstr("hi", "world", 5);
	printf("test 6: %s\n", result ? result : "NULL");
	//Test 7: len = 0
	result = ft_strnstr("hello", "hehe", 0);
	printf("test 7: %s\n", result ? result : "NULL");
}
*/
