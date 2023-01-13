/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:17 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/13 20:20:46 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../inc/libft.h"

// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

void sort_3(t_list **stack_a)
{
    if (((*stack_a)->data < (*stack_a)->next->data) && ((*stack_a)->next->data > (*stack_a)->next->next->data))   
    {
        // rra(stack_a);
        sa(stack_a);
    }
}

void sort_100(t_list **stack_a, t_list **stack_b, int bits, int size)
{
    int i;
    int j;
    
     i = 0;
    while (i < bits)
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

void push_swap(t_list **stack_a, t_list **stack_b)
{
    int max_bits;
    int size;

    max_bits = 0;
    size = ft_lstsize(*stack_a);
    while (((size - 1) >> max_bits) != 0)
        max_bits++;
    if (size == 3)
        sort_3(stack_a);
    else if (size <= 100)
        sort_100(stack_a, stack_b, max_bits, size);
}
