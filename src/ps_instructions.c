/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:01:00 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/11 13:34:28 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void ra(t_list **list_a)
{
    t_list *tmp;
    t_list *last;

    if (!*list_a || ft_lstsize(*list_a) == 1)
        return;
    tmp = *list_a;
    last = ft_lstlast(*list_a);
    *list_a = (*list_a)->next;
    tmp->next = NULL;
    last->next = tmp;
    ft_putstr("ra\n");
}

void pb(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;
    t_list *new;

    if (!*stack_a)
        return;
    tmp = *stack_a;
    new = ft_lstnew(tmp->data);
    *stack_a = tmp->next;
    free(tmp);
    ft_lstadd_front(stack_b, new);
    ft_putstr("pb\n");
}

void pa(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;
    t_list *new;

    if (!*stack_b)
        return;
    tmp = *stack_b;
    new = ft_lstnew(tmp->data);
    *stack_b = tmp->next;
    free(tmp);
    ft_lstadd_front(stack_a, new);
    ft_putstr("pa\n");
}
