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

static int	ft_checkset(char s, char const *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*dest;
	char const	*end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	end = s1 + ft_strlen(s1);
	while (*s1 && ft_checkset(*s1, set))
		s1++;
	while (end > s1 && ft_checkset(*(end - 1), set))
		end--;
	len = end - s1;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strlcat(dest, s1, len + 1);
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "@Hello!@";
// 	char set[] = "@";
// 	char *result = ft_strtrim(s1, set);
// 	printf("%s\n", result);
// 	free(result);
// }
