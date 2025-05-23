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

// static void    *double_int(void *content)
// {
//     int *num = (int *)content;
//     int *new = malloc(sizeof(int));
//     *new = (*num) * 2;
//     return (new);
// }

// #include <stdio.h>

// int main(void)
// {
//     t_list *list = NULL;
//     t_list *mapped;
//     int *num1 = malloc(sizeof(int));
//     int *num2 = malloc(sizeof(int));
//     *num1 = 42;
//     *num2 = 100;
//     ft_lstadd_back(&list, ft_lstnew(num1));
//     ft_lstadd_back(&list, ft_lstnew(num2));
//     mapped = ft_lstmap(list, double_int, ft_del);
//     t_list *tmp = mapped;
//     while (tmp) 
//     {
//         printf("%d\n", *(int *)tmp->content);
//         tmp = tmp->next;
//     }
//     ft_lstclear(&list, ft_del);
//     ft_lstclear(&mapped, ft_del);
// }

/*
Check if arguments are NULL
Set newlist to NULL and commence mapping through lst
Use a while loop till NULL to reach each node in lst
	run function for lst->content
    create new nodes for newlist
    if node creation fails, free memory
	add new node for newlist
	step to next node in lst
*/