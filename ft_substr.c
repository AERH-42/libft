/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/13 18:51:24 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	start_len;
	char	*dest;

	if (s == NULL)
		return (NULL);
	start_len = ft_strlen(s + start);
	if (start_len < len)
		len = start_len;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && len > 0)
	{
		dest[i] = s[start + i];
		len--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	size_t	len;
// 	char	*test;
// 	unsigned int	start;
// 	char const	s[] = "Hello World";

// 	start = 3;
// 	len = 7;
// 	test = ft_substr(s, start, len);
// 	if (test == NULL)
// 	{
// 		printf("Failed!\n");
// 		return (0);
// 	}
// 	printf("%s\n", test);
// 	free(test);
// 	return (0);
// }
