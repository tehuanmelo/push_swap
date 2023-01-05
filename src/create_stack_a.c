/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/04 22:24:49 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AND operator returns 0 if any bit of any operand is 0
// OR operator returns 1 if any bit of any operand is 1
// XOR operator returns 1 if the correspnding bits are opposite

#include "push_swap.h"

// t_list *append_number(t_list *list, int number)
// {
//     t_list *new;
//     t_list *tmp;

//     new = (t_list *)malloc(sizeof(t_list));
//     tmp = list;
//     if (new)
//     {
//         new->data = number;
//         new->next = NULL;
//         if (list == NULL)
//             list = new;
//         else
//         {
//             while (tmp->next != NULL)
//                 tmp = tmp->next;
//             tmp->next = new;
//         }
//     }
//     return (list);
// }

t_list *create_stack_a(char **input)
{
    t_list *list;
    t_list *node;

    list = NULL;
    while (*(++input))
    {
        node = ft_lstnew(ft_atoi(*input));
        ft_lstadd_back(&list, node); 
    }
    return list;
}
