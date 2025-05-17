/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:49:16 by aerh              #+#    #+#             */
/*   Updated: 2025/05/16 19:08:15 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_putnbr(char *dest, int n, int *i)
{
	if (n == -2147483648)
	{
		dest[0] = '-';
		dest[1] = '2';
		n = 147483648;
		*i = 2;
	}
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
		*i = 1;
	}
	if (n >= 10)
	{
		ft_putnbr(dest, n / 10, i);
	}
	dest[*i] = n % 10 + '0';
	(*i)++;
	dest[*i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		count;
	int		i;

	count = ft_count(n);
	dest = malloc((count + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	ft_putnbr(dest, n, &i);
	return (dest);
}

// #include <stdio.h>

// int main (void)
// {
// 	int	test = -1234567;
// 	printf("%s\n", ft_itoa(test));
// }