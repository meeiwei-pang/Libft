/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:19:24 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:16:43 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "Hello";
	printf("%s\n", ft_strchr(s, 'l'));

	char s1[] = "Hello";
	printf("%s\n", strchr(s1, 'l'));
}
*/
//return a pointer to the first occurance of c (byte) in s
//return null if c is not founds
//must return char *
// c to char because c comes in int, string c are char
