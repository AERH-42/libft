/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 11:43:11 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*node1 = ft_lstnew("Hello");
// 	t_list	*node2 = ft_lstnew("World");
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);
// 	t_list *tmp = lst;
// 	while (tmp)
// 	{
// 		printf ("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	free(node1);
// 	free(node2);
// }

/*
Check for NULL to verify if new node exists
Connect New Node by pointing to current first node, *lst
Update Head Pointer by making the list head point to the new node, new
*/