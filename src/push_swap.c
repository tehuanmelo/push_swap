/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:06:17 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 19:31:04 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../inc/libft.h"

/* There is just a single solution to sort two numbers, simply invert
both numbers applying sa() instruction */

void sort_2(t_list **stack_a)
{
    sa(stack_a);
}

/* There are 6 possible combinations with three numbers, one of them is
sorted that we can exclude, so remains 5 possible combinations as down below.
1 3 2 - 2 1 3 - 2 3 1 - 3 1 2 - 3 2 1
Sort three sorts the numbers manually we check each position on the stack
and call the appropriate instruction to sort the numbers */

void sort_3(t_list **stack_a)
{
    if ((*(int *)(*stack_a)->data < *(int *)(*stack_a)->next->data) &&
        (*(int *)(*stack_a)->data < *(int *)(*stack_a)->next->next->data))
    {
        rra(stack_a);
        sa(stack_a);
    }
    else if ((*(int *)(*stack_a)->data > *(int *)(*stack_a)->next->data) &&
        (*(int *)(*stack_a)->data < *(int *)(*stack_a)->next->next->data))
        sa(stack_a);
    else if ((*(int *)(*stack_a)->data < *(int *)(*stack_a)->next->data) &&
        (*(int *)(*stack_a)->data > *(int *)(*stack_a)->next->next->data))
        rra(stack_a);
    else if ((*(int *)(*stack_a)->data > *(int *)(*stack_a)->next->data) &&
        (*(int *)(*stack_a)->next->data < *(int *)(*stack_a)->next->next->data))
        ra(stack_a);
    else
    {
        sa(stack_a);
        rra(stack_a);
    }
}

void sort_5(t_list **stack_a, t_list **stack_b)
{
    int i;

    i = 0;
    while (i < 5)
    {
        if (*(int *)(*stack_a)->data == 4 || *(int *)(*stack_a)->data == 0)
            pb(stack_a, stack_b);
        else
            ra(stack_a);
        i++;
    }
    sort_3(stack_a);
    pa(stack_a, stack_b);
    pa(stack_a, stack_b);
    if (*(int *)(*stack_a)->data == 4)
        ra(stack_a);
    else
    {
        sa(stack_a);
        ra(stack_a);
    }
}

/* sort_big function sort the data using the radix sort algorithm.
The algorithm sort the numbers based on their bits, the binary form of each
number. The algorithm checks the least significant bit if one sends it to
the bottom of the stack, if it's zero sends it to stack b, after checking
all the numbers it sends the numbers on stack b to the top of stack a. Then
the algorithm does the same for the next bit and keeps doing until the
last bit. */

void sort_big(t_list **stack_a, t_list **stack_b, int bits, int size)
{
    int i;
    int j;

    i = 0;
    while (i < bits)
    {
        j = 0;
        while (j < size)
        {
            if (((*(int *)(*stack_a)->data >> i) & 1) == 1)
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

/* push_swap checks the length of the input and decides wich algorithm can
sort the data in a more eficiently way
max_bits is the number of bits the max number contains */

void push_swap(t_list **stack_a, t_list **stack_b)
{
    int max_bits;
    int size;

    max_bits = 0;
    size = ft_lstsize(*stack_a);
    while (((size - 1) >> max_bits) != 0)
        max_bits++;
    if (size < 3)
        sort_2(stack_a);
    else if (size == 3)
        sort_3(stack_a);
    else if (size <= 5)
        sort_5(stack_a, stack_b);
    else if (size > 5)
        sort_big(stack_a, stack_b, max_bits, size);
}
