/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/22 12:45:39 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlist;
    t_list  *node;
    void    *ptr;

    if (f == NULL || del == NULL || lst == NULL)
        return (NULL);
    newlist = NULL;
    while (lst)
    {
        ptr = f(lst->content);
        if (ptr == NULL)
        {
            ft_lstclear(&newlist, del);
            return (NULL);
        }
        node = ft_lstnew(ptr);
        if (node == NULL)
        {
            del(ptr);
            ft_lstclear(&newlist, del);
            return (NULL);
        }
        ft_lstadd_back(&newlist, node);
        lst = lst->next;
    }
    return (newlist);
}

// static void	ft_del(void *ptr)
// {
// 	free(ptr);
// }

// #include <stdio.h>

// int main(void)
// {
//     t_list	*tmp = NULL;
//     t_list  *lst1 = ft_lstnew("Hello");
//     t_list  *lst2 = ft_lstnew("World");
// 	ft_lstadd_front(&tmp, lst1);
// 	ft_lstadd_back(&tmp, lst2);
// 	ft_lstiter(tmp, ft_ft);
// 	while (tmp)
//     {
//         t_list *next = tmp->next;
//         free(tmp);
//         tmp = next;
//     }
// }

/*
Check f is NULL
if lst == NULL, it will skip the while loop
Use a while loop till NULL to reach each node
	run function for lst->content
	let lst be address of next node to transverse
	should next node be NULL, while loop stops
*/