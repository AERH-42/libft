/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:46:37 by aerh              #+#    #+#             */
/*   Updated: 2025/05/14 18:55:19 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	ft_strlcat(dest, s1, len + 1);
	ft_strlcat(dest, s2, len + 1);
	return (dest);
}

// #include <stdio.h>

// int main(void) 
// {
//     char str1[] = "Hello World!";
//     char str2[] = " Good Morning";
//     char *result1 = ft_strjoin(str1, str2);
//     printf("Test 1: %s\n", result1);
//     free(result1);

//     char strs3[] = "-";
//     char *result2 = ft_strjoin(NULL, strs3);
//     printf("Test 2: %s\n", result2);
//     free(result2);

// 	char str4[] = "";
//     char str5[] = " Good Morning";
//     char *result3 = ft_strjoin(str4, str5);
//     printf("Test 1: %s\n", result3);
//     free(result3);

//     return (0);
// }
