/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 22:41:39 by aerh              #+#    #+#             */
/*   Updated: 2025/05/28 14:26:10 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign_type;

	if (!str)
		return (0);
	result = 0;
	sign_type = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_type = -1;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (result);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign_type * result);
}

// #include <stdio.h>

// int main(void)
// {
// 	//Null tests
// 	printf("NULL -> %d\n",ft_atoi(NULL));
//     // Basic tests
//     printf("'42' -> %d\n", ft_atoi("42"));// Expected: 42
//     printf("'-123' -> %d\n", ft_atoi("-123"));// Expected: -123
//     printf("'0' -> %d\n", ft_atoi("0"));// Expected: 0
//     // Whitespace tests
//     printf("'   42' -> %d\n", ft_atoi("   42"));// Expected: 42
//     printf("'\\t\\n\\v\\f\\r42' -> %d\n", ft_atoi("\t\n\v\f\r42"));
//     // Sign tests
//     printf("'+123' -> %d\n", ft_atoi("+123"));// Expected: 123
//     printf("'++123' -> %d\n", ft_atoi("++123"));// Expected: 0
//     printf("'--123' -> %d\n", ft_atoi("--123"));// Expected: 0
//     printf("'-+123' -> %d\n", ft_atoi("-+123"));// Expected: 0
//     printf("'+-123' -> %d\n", ft_atoi("+-123"));// Expected: 0
//     // Mixed tests
//     printf("'  +-42' -> %d\n", ft_atoi("  +-42"));
//     printf("'  \\t-+42abc' -> %d\n", ft_atoi("  \t-+42abc"));
//     // Edge cases
//     printf("'2147483647' -> %d\n", ft_atoi("2147483647")); // INT_MAX
//     printf("'-2147483648' -> %d\n", ft_atoi("-2147483648")); // INT_MIN
//     // Invalid input tests
//     printf("'abc123' -> %d\n", ft_atoi("abc123"));// Expected: 0
//     printf("'' -> %d\n", ft_atoi(""));// Expected: 0
//     printf("'   ' -> %d\n", ft_atoi("   "));// Expected: 0
//     printf("'123abc' -> %d\n", ft_atoi("123abc"));// Expected: 123
//     return 0;
// }