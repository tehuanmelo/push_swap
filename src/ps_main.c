/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/20 13:32:33 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../inc/push_swap.h"
#include "../inc/libft.h"

// remember to delete this function
void print_list(t_list *list, char c)
{
    printf("-----------\n");
    printf("stack %c\n", c);
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
    char **input;

    stack_a = NULL;
    stack_b = NULL;
    copy = NULL;
    if (ac > 1)
    {
        input = av;
        stack_a = create_stack(input);
        if (!stack_a)
           print_error_exit();
        copy = create_stack(input);
        ps_sortlist(&copy);
        index_stack(stack_a, copy);
        ps_freelist(copy);
        push_swap(&stack_a, &stack_b);
        ps_freelist(stack_a);
        ps_freelist(stack_b);
    }
}


