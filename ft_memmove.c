/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:23 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 16:10:56 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*s;

	ptr = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (ptr == s || n == 0)
		return (dest);
	if (ptr < s)
	{
		while (n--)
			*ptr++ = *s++;
	}
	else
	{
		ptr += n;
		s += n;
		while (n--)
			*--ptr = *--s;
	}
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[100] = "Hello World";
// 	ft_memmove(str+5, str, 12);
// 	printf ("%s\n", str);
// }