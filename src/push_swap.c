/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:17 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 21:34:03 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void push_swap(t_list **stack_a, t_list **stack_b)
{
    int size;
    int max_num;
    int max_bits;
    int i;
    int j;
    int num;

    size = ft_lstsize(*stack_a);
    max_num = ft_lstsize(*stack_a) - 1;
    max_bits = 0;
    (void)max_num;
    (void)size;
    (void)num;
    while ((max_num >> max_bits) != 0)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            num = (*stack_a)->data;
            if ((((*stack_a)->data >> i)&1) == 1)
                ra(*stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        t_list *tmp;
        (void)tmp;
        while (*stack_b)
        {
            tmp = *stack_b;
            pa(stack_a, stack_b);
        }
            
        i++;
    }
}
