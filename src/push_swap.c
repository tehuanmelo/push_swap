/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:17 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 22:44:08 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../inc/libft.h"

// void sort_3(t_list **stack_a, t_list **stack_b)
// {
//     t_list *tmp;
//     int num1;
//     int num2;
//     int num3;

//     while (tmp)
//     {
//         if (tmp->data = 0)
//             num1 = 0;
//         else if (tmp->data = 1)
//             num2 = 1;
//         else
//             num3 = 2;
//         tmp = tmp->next;
//     }
//     if ()
// }

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
    sort_100(stack_a, stack_b, max_bits, size);
   
}
