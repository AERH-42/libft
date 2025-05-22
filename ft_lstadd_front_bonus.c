/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/20 21:51:15 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return(node);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *node = ft_lstnew("Hello World");
// 	printf ("%s\n", (char *)node->content);
// 	free(node);
// }

/*
t_list is a struct with two members
	content: a generic pointer (void *) to store any data type
	next: a pointer to another t_list node, making a linked list
node->content;
	this is equivalent to (*node).content. 
	The arrow accesses the struct member via a pointer
node->next = NULL;
	ensures the node doesn't point to garbage
*/