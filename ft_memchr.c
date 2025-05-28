/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:23 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 14:31:47 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*ptr;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == ch)
			return ((void *)s);
		ptr++;
		s++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	const char test[] = "Hello World";
	printf ("%s\n", (char *)ft_memchr(test, 111, 8));
}
