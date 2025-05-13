/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/13 17:18:11 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*dest;

	size = 0;
	if (s == NULL)
		return (NULL);
	while (s[size] != '\0')
		size++;
	size++;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void) 
// {
//     char *src = NULL;
//     char *dup = ft_strdup(src);

//     // Verify duplication
//     int i = 0;
// 	if (src == NULL)
// 	{
// 		printf("Source is NULL\n");
// 		return (1);
// 	}
//     while (src[i] != '\0') 
// 	{
//         if (dup[i] != src[i]) 
// 		{
//             printf("Test Failed: Mismatch at index %d\n", i);
//             free(dup);
//             return (1);
//         }
//         i++;
//     }
//     if (dup[i] != '\0') 
// 	{
//         printf("Test Failed: Missing null terminator\n");
//         free(dup);
//         return (1);
//     }
//     printf("Test Passed: Normal string duplicated correctly\n");
//     free(dup);
//     return (0);
// }