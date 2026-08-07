/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 09:30:10 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:39:30 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	result = malloc (len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return ((char *)result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s = "apple, orange, grape";
	printf("%s\n", ft_substr(s, 7, 6));
}
*/
//it returns a new independeng string...
//...contaning the len char from start in sS
