/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/26 12:19:50 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
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
// 	printf ("%d\n", ft_lstsize(tmp));
// 	free(node1);
// 	free(node2);
// }

/*
Start counting from head
Increment count
Move to next node till NULL is met and while loop exits
Return final count
*/