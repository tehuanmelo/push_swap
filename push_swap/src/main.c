/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/04 23:04:26 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AND operator returns 0 if any bit of any operand is 0
// OR operator returns 1 if any bit of any operand is 1
// XOR operator returns 1 if the correspnding bits are opposite

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *stack_a;

    stack_a = NULL;

    if (ac > 1)
    {
        // check_parameter function returns 0 if find duplicates,
        // if is not a number or if the parameters are sorted
        if (check_parameters(av, ac))
        {
            stack_a = create_stack_a(av);
            ft_sortlst(&stack_a);
            while (stack_a)
            {
                printf("%d\n", stack_a->data);
                stack_a = stack_a->next;
            }
        }
        else
            print_error();
    }
    else
        print_error();
}