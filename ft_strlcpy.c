/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:58:28 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 16:11:50 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>

// int main (void)
// {
// 	char dest[5] = "Hi";
//     char src[] = "World";
//     unsigned int size = sizeof(dest);

//     unsigned int result = ft_strlcpy(dest, src, size);

//     printf("Buffer: %s\n", dest);
//     printf("Source length: %u\n", result);

//     return (0);
// }