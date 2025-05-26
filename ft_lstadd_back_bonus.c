/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/26 17:29:52 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*node1 = ft_lstnew("Hello");
// 	t_list	*node2 = ft_lstnew("World");
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_front(&lst, node2);
// 	t_list *tmp = lst;
// 	while (tmp)
// 	{
// 		printf ("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	while (lst)
// 	{
// 		t_list *next = lst->next;
// 		free(lst);
// 		lst = next;
// 	}
// }

/*
Check for empty list. If *lst is NULL, make new the first node
Find current last node, if not empty list, using ft_lstlast
Link new node by setting next pointer of last node to point to new
Set next node of new to NULL
*/