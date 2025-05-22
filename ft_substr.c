/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 20:42:20 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
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
// 	char const	s[] = "tripouille";

// 	start = 100;
// 	len = 1;
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
