/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/13 17:18:11 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*dest;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	dest = malloc((len + 1)* sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// static char	ft_test(unsigned int i, char c)
// {
// 	if (i % 2 == 1)
// 		return ('*');
// 	else
// 		return (c);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "Hello World";
// 	char *result = ft_strmapi(s, ft_test);
// 	printf("%s\n", result);
// }
