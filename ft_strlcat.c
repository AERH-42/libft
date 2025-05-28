/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:26:48 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 12:48:37 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = 0;
	src_len = 0;
	if (!dest || !src)
		return (0);
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest [dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main (void)
// {
// 	char dest[5] = "Hi";
//     char src[] = "World";
//     unsigned int size = sizeof(dest);

//     unsigned int result = ft_strlcat(dest, src, size);

//     printf("Buffer: %s\n", dest);
//     printf("Total Length: %u\n", result);

//     return 0;
// }
