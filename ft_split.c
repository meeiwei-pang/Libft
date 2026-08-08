/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:08:47 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/08 20:08:51 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char *s)
{
	int	word_count;
	int	i;
	char	c;
	
	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i-1] == c))
			word_count++;
		i++;
	}
	return(word_count);
}


char **ft_split(char const *s, char c)
{
	char	*result;
	int		i;
	int		len;

	result = malloc((word_count) + 1) * sizeof(char *));
	if (result = NULL)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i-1] == c))
		{
			start = i;
			len = 0;
			while (s[start + len] != c && s[start + len] != '\0')
				len++;
			result[word_i] = ft_substr(s, start, len);
			word_i++;
		}
		result[word_i] = NULL;
		i++;
	}
	
	return (result);
}

void	ft_free_split(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}
/*return new_arr, null is failed, '\0', free
c - \t \n \r , | ; : 
count the word without the dilimiter
allocate the outer array
fill in each word (does a word start here?), start=i, count len from start untill hit c or \0
ft_substr store it 
*/