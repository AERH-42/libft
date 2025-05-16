/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:10:16 by aerh              #+#    #+#             */
/*   Updated: 2025/05/16 17:50:55 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	int	word;
	int	i;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			word = 0;
		else if (!word)
		{
			count++;
			word = 1;
		}
		i++;
	}
	return (count);
}

static char	*ft_putword(char const *str, char c, size_t *i)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	while (str[*i] == c && str[*i] != '\0')
		(*i)++;
	start += *i;
	while (str[*i] != c && str[*i] != '\0')
		(*i)++;
	end += *i;
	if (end > start)
		return (ft_substr(str, start, end - start));
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**arr;
	size_t	i;
	size_t	word;

	if (str == NULL)
		return (NULL);
	arr = malloc((count_words(str, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	word = 0;
	while (word < count_words(str, c))
	{
		arr[word] = ft_putword(str, c, &i);
		if (!arr[word])
		{
			while (word > 0)
				free(arr[--word]);
			free(arr);
			return (NULL);
		}
		word++;
	}
	arr[word] = 0;
	return (arr);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "hello,world";
//     char charset = ',';
//     char **result = ft_split(str, charset);  
//     printf("Basic split: %s\n", str);
//     int i = 0;
//     while (result[i]) 
// 	{
//         printf("Word %d: %s\n", i, result[i]);
//         i++;
//     }  
//     i = 0;
//     while (result[i]) 
// 	{
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return 0;
// }
