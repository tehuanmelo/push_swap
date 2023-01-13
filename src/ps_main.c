/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 22:55:39 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AND operator returns 0 if any bit of any operand is 0
// OR operator returns 1 if any bit of any operand is 1
// XOR operator returns 1 if the correspnding bits are opposite

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
        stack_a = create_stack_a(input);
        copy = create_stack_a(input);
        // print_list(stack_a, 'a');
        ft_sortlst(&copy);
        ft_indexlst(&stack_a, &copy);
        // print_list(stack_a, 'A');
        ft_freelst(copy);
        push_swap(&stack_a, &stack_b);
        // print_list(stack_a, 'a');
        ft_freelst(stack_a);
        ft_freelst(stack_b);
    }
}
