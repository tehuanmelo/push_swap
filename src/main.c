/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/08 21:50:03 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AND operator returns 0 if any bit of any operand is 0
// OR operator returns 1 if any bit of any operand is 1
// XOR operator returns 1 if the correspnding bits are opposite

#include "../inc/push_swap.h"

void ft_indexlst(t_list **unsorted, t_list **sorted)
{
    t_list *i;
    t_list *j;
    int index;

    index = 0;
    i = *sorted;
    while(i)
    {
        j = *unsorted;
        while (j)
        {
            if (i->data == j->data)
                j->data = index;
            j = j->next;
        }
        i = i->next;
        index++;
    }
}

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    t_list *stack_copy;

    (void)stack_a;
    (void)stack_b;

    if (ac > 1)
    {
        // check_parameter function returns 0 if find duplicates,
        // if is not a number or if the parameters are sorted
        if (check_parameters(av, ac))
        {
            stack_a = create_stack_a(av);
            stack_copy = create_stack_a(av);
            ft_sortlst(&stack_copy);
            ft_indexlst(&stack_a, &stack_copy);
            printf("%7c%7c\n", 'A', 'B');
            while (stack_a && stack_copy)
            {
                printf("%7d%7d\n", stack_a->data, stack_copy->data);
                stack_a = stack_a->next;
                stack_copy = stack_copy->next;
            }
        }
        else
            print_error();
    }
    else
        print_error();
}