/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:23 by aerh              #+#    #+#             */
/*   Updated: 2025/05/09 20:05:16 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s && *s != ch)
		s++;
	if (*s == ch)
		return ((char *)s);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char test[] = "Hello World";
// 	printf ("%s\n", ft_strchr(test, 120));
// }
