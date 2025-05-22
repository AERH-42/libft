/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 17:52:18 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*n_node;

	if (lst == NULL || *lst == NULL || del == NULL)
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