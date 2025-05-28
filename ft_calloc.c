/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 12:04:25 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	i;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	else if (nmemb == 0 || size == 0)
	{
		dest = malloc(0);
		return (dest);
	}
	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		((char *)dest)[i] = 0;
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	size_t	nmemb;
// 	size_t	size;
// 	size_t	i;
// 	int		*arr;

// 	nmemb = 5;
// 	size = sizeof(int);
// 	arr = ft_calloc(nmemb, size);
// 	if (arr == NULL)
// 	{
// 		printf("Allocation Failed!\n");
// 		return (0);
// 	}
// 	i = 0;
// 	while (i < nmemb)
// 	{
// 		if (arr[i] != 0)
// 		{
// 			printf("Memory at index %zu is not zero.\n", i);
// 			free(arr);
// 			return (0);
// 		}
// 		i++;
// 	}
// 	printf("Calloc is successful.\n");
// 	free(arr);
// 	return (0);
// }
