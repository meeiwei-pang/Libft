/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:50:08 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:17:41 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_arr;
	int		len;
	int		i;

	len = ft_strlen(s);
	new_arr = (char *)malloc((len + 1) * sizeof (char));
	if (new_arr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_arr[i] = s[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "craving kimchi";
	char str1[] = "craving udon";
	char *copy;
	char *copy1;
	
	copy = ft_strdup(str);
	copy1 = strdup(str1);
	if (copy == NULL || copy1 == NULL )
		return (1);
	printf("mine: %s real: %s\n", copy, copy1);

	str[0] = 'X';
        printf("after modi str: %s\n", str);
        printf("after copy: %s\n", copy);
	
	free(copy);
	free(copy1);
	return (0);
}
*/
