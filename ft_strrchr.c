/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:38:24 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/04 11:38:24 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int	i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = (char *)(s + i);
	i++;
	}
	return (last);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "Hello";
	char s2[] = "Hello";

	printf("%s\n", ft_strrchr(s, 'l'));
	printf("%s\n", strrchr(s2, 'l'));
}
*/
// last = s + i, when it hit c, whether update or leave
//strchr, if hit c, return s+i, stop the loop