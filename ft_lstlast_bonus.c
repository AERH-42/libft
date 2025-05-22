/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 12:45:39 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*node1 = ft_lstnew("Hello");
// 	t_list	*node2 = ft_lstnew("World");
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);
// 	printf ("%s\n", (char *)ft_lstlast(lst)->content);
// 	while (lst)
// 	{
// 		t_list *next = lst->next;
// 		free(lst);
// 		lst = next;
// 	}
// }

/*
Check if list is empty through NULL checks
Move through nodes till next is NULL
Return final node
*/