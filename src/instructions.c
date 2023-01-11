/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:01:00 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 21:15:27 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void ra(t_list *list_a)
{
    t_list *tmp;
    t_list *last;
    
    tmp = ft_lstnew(list_a->data);
    last = ft_lstlast(list_a);
    tmp->data = list_a->data;
    list_a->data = last->data;
    last->data = tmp->data;
    free(tmp);
    printf("ra\n");
}

void pb(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;
    t_list *new;

    tmp = *stack_a;
    new = ft_lstnew(tmp->data);
    *stack_a = tmp->next;
    free(tmp);
    ft_lstadd_front(stack_b, new);
    printf("pb\n");
    
}

void pa(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;
    t_list *new;

    tmp = *stack_b;
    new = ft_lstnew(tmp->data);
    *stack_b = tmp->next;
    free(tmp);
    ft_lstadd_front(stack_a, new);
     printf("pa\n");
    
}

