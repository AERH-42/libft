/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:46:37 by aerh              #+#    #+#             */
/*   Updated: 2025/05/14 22:32:56 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*dest;
	char	*start;
	char	*end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr(set[i], *s1) != NULL)
	{
		start = ft_strchr(s1, set[i]);
		end = ft_strrchr(s1, set[i]);
		i++;
	}
	len = end - start;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strlcat(dest, start, len + 1);
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "Hello World@";
// 	char set[] = "@!";
// 	char *result = ft_strtrim(s1, set);
// 	printf("%s\n", result);
// 	free(result);
// }