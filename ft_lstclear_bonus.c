/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/26 12:19:57 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*n_node;

	if (*lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		n_node = current->next;
		del(current->content);
		free(current);
		current = n_node;
	}
	*lst = NULL;
}

// static void	ft_del(void *ptr)
// {
// 	free(ptr);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	test1 = malloc(2 * sizeof(char));
// 	test2 = malloc(2 * sizeof(char));
// 	test1[0] = 'H';
// 	test1[1] = '\0';
// 	test2[0] = 'W';
// 	test2[1] = '\0';
// 	t_list	*lst1 = ft_lstnew(test1);
// 	t_list	*lst2 = ft_lstnew(test2);
// 	t_list	*tmp = NULL;
// 	ft_lstadd_front(&tmp, lst1);
// 	ft_lstadd_back(&tmp, lst2);
// 	while (tmp)
// 	{
// 		printf ("lst = %s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&lst1, ft_del);
// 	printf ("lst1 after free = %s\n", test1);
// 	printf ("lst2 after free = %s\n", test2);
// }

/*
lst
	address of a pointer (t_list**)
*lst
	pointer itself (t_list*)
**lst
	the actual node
Check for NULL
Start at head of list (*lst)
For each node
	save next pointer
	delete node content
	free node
	go to next node
set head of list to NULL, else its garbage
*/