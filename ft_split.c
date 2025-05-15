/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:10:16 by aerh              #+#    #+#             */
/*   Updated: 2025/04/10 11:01:10 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_seperator(char a, char c)
{
	if (c == a)
		return (1);
	return (0);
}

size_t	count_words(char const *str, char c)
{
	int	word;
	int	i;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (find_seperator(str[i], c))
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

char	**ft_split(char const *str, char c)
{
	char	**arr;
	size_t	i;
	size_t	x;
	size_t	k;

	if (str == NULL || &c == NULL)
		return (NULL);
	arr = malloc((count_words(str, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0' && k < count_words(str, c))
	{
		while (str[i] != '\0' && find_seperator(str[i], c))
			i++;
		x = i;
		while (str[i] != '\0' && !find_seperator(str[i], c))
			i++;
		if (i > x)
			arr[k++] = ft_strtrim(&str[x], &c);
	}
	arr[k] = 0;
	return (arr);
}

#include <stdio.h>

int main() 
{
    char *str = "hello,world,how,are,you";
    char charset = ',';
    char **result = ft_split(str, charset);  
    printf("Basic split: %s\n", str);
    int i = 0;
    while (result[i]) 
	{
        printf("Word %d: %s\n", i, result[i]);
        i++;
    }  
    i = 0;
    while (result[i]) 
	{
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}