/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:53:32 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 17:07:55 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	*result;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	len = j - i + 1;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	k = 0;
	while (k < len)
	{
		result[k] = s1[i + k];
		k++;
	}
	result[k] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "aaaaaaa";
	char	set[] = "aa";
	printf("%s\n", ft_strtrim(s1, set));
}
*/
//s1 te bo trim, set-set of char to be removed
//return trimmed str, null if fail
//it remove char from the start of s1 for ala char is found in set...
//...and remove char from the end of s1 " but leave the middle untouched