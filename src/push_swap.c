/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:17 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/11 21:18:23 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void push_swap(t_list **stack_a, t_list **stack_b)
{
    int max_bits;
    int size;
    int i;
    int j;

    max_bits = 0;
    size = ft_lstsize(*stack_a);
    while (((size - 1) >> max_bits) != 0)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            if ((((*stack_a)->data >> i) & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        while (*stack_b != NULL)
            pa(stack_a, stack_b);
        i++;
    }
}
