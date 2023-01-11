/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 21:36:34 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AND operator returns 0 if any bit of any operand is 0
// OR operator returns 1 if any bit of any operand is 1
// XOR operator returns 1 if the correspnding bits are opposite

#include "../inc/push_swap.h"

// remember to delete this function
void print_list(t_list *list)
{
    while (list)
    {
        printf("%d\n", list->data);
        list = list->next;
    }
}

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    t_list *copy;

    if (ac > 1)
    {
        stack_a = create_stack_a(av);
        stack_b = NULL;
        copy = create_stack_a(av);
        ft_sortlst(&copy);
        ft_indexlst(&stack_a, &copy);
        printf("----------\n");
        printf("stack a\n");
        printf("----------\n");
        push_swap(&stack_a, &stack_b);
        printf("----------\n");
        printf("stack a\n");
        printf("----------\n");
        print_list(stack_a);
       
    }
    else
        print_error();
}
