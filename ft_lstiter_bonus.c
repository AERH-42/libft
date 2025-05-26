/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerh <aerh@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:37:49 by aerh              #+#    #+#             */
/*   Updated: 2025/05/26 12:19:55 by aerh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (f == NULL)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
// #include <stdio.h>

// static void	ft_ft(void *content)
// {
// 	printf ("%s\n", (char *)content);
// }

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