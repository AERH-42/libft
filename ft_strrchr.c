/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:23 by aerh              #+#    #+#             */
/*   Updated: 2025/05/09 20:04:30 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	s += i;
	ch = (unsigned char)c;
	while (i >= 0)
	{
		if (*s == ch)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char test[] = "Hello World";
// 	printf ("%s\n", ft_strrchr(test, 0));
// }
