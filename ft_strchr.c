/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:19:24 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/02 19:48:45 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c != '\0')
			return ((char *)(s + i));
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char s[] = "Hello";
	printf("%s\n", ft_strchr(s, 10));

	char s1[] = "Hello";
	printf("%s\n", strchr(s1, 10));
}
//return a pointer to the first occurance of c (byte) in s
//return null if c is not founds
//must return char *