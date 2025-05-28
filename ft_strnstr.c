/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:19:45 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 14:50:09 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (big[i] == little[i] && little[i] && i < len)
			i++;
		if (little[i] == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	const char big[] = "Foo Bar Baz";
	const char small[] = "r Ba";
	printf ("%s\n", ft_strnstr(big, small, 11));
}
