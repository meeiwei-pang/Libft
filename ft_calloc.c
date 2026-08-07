/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeei-we <pmeei-we@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 00:22:38 by pmeei-we          #+#    #+#             */
/*   Updated: 2026/08/07 11:05:23 by pmeei-we         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
	{
		result = malloc(1);
		return (result);
	}
	if (nmemb > (SIZE_MAX / size))
		return (NULL);
	result = malloc (nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	*arr;
	size_t	i;

	// Test 1: normal case — 5 ints, should all be zero
	printf("--- Test 1: normal allocation ---\n");
	arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("FAILED: got NULL\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	
	// Test 2: nmemb == 0
	printf("\n--- Test 2: nmemb == 0 ---\n");
	arr = (int *)ft_calloc(0, sizeof(int));
	printf(arr != NULL ? "OK: got non-NULL pointer\n" : "FAILED: got NULL\n");
	free(arr);

	// Test 3: size == 0
	printf("\n--- Test 3: size == 0 ---\n");
	arr = (int *)ft_calloc(5, 0);
	printf(arr != NULL ? "OK: got non-NULL pointer\n" : "FAILED: got NULL\n");
	free(arr);

	// Test 4: overflow case — should return NULL, not crash
	printf("\n--- Test 4: overflow (SIZE_MAX, 2) ---\n");
	arr = (int *)ft_calloc(SIZE_MAX, 2);
	printf(arr == NULL ? "OK: got NULL as expected\n" 
		: "FAILED: should have been NULL\n");
	free(arr);

	// Test 5: compare the real calloc
	printf("\n--- Test 5: matches real calloc behavior ---\n");
	int *mine = (int *)ft_calloc(3, sizeof(int));
	int *real = (int *)calloc(3, sizeof(int));
	printf(memcmp(mine, real, 3 * sizeof(int)) == 0 ? "OK
		: identical output\n" : "FAILED: mismatch\n");
	free(mine);
	free(real);

	return (0);
}
*/
//malloc-takes one argument: total bytes
//calloc-takes 2 arguments:no. of elements, size of each element
//nmemb - count of the elements
//allocate 1 byte, catch overflow, then allocate,zero every byte, result
