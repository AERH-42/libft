/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:23 by aerh              #+#    #+#             */
/*   Updated: 2025/05/09 16:07:21 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*s;

	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[100] = "Hello World";
// 	printf ("%s\n", (char *)ft_memcpy(str+5, str, 12));
// }
