/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 16:51:30 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// static void	ft_del(void *ptr)
// {
// 	free(ptr);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char	*test;

// 	test = malloc(2 * sizeof(char));
// 	test[0] = 'H';
// 	test[1] = '\0';
	
// 	t_list	*lst = ft_lstnew(test);
// 	printf ("%s\n", (char *)lst->content);
// 	ft_lstdelone(lst, ft_del);
// 	printf ("%s\n", test);
// }

/*
Check for NULL
Free contect
Free node
*/