/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/21 23:29:38 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../inc/push_swap.h"
#include "../inc/libft.h"

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    t_list *copy;

    stack_a = NULL;
    stack_b = NULL;
    copy = NULL;
    if (ac > 1)
    {
        if (!*av[1])
            exit(1);
        stack_a = create_stack(av);
        if (!stack_a)
            exit(1);
        validate_path(stack_a);
        copy = create_stack(av);
        sortlist(&copy);
        index_stack(stack_a, copy);
        freelist(copy);
        push_swap(&stack_a, &stack_b);
        freelist(stack_a);
        freelist(stack_b);
    }
}


