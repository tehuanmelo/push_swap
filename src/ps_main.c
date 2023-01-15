/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 19:34:28 by tehuanmelo       ###   ########.fr       */
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
        printf("%d\n", *(int *)list->data);
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
        print_list(stack_a, 'a');
        ft_sortlst(&copy);
        index_stack(&stack_a, &copy);
        print_list(stack_a, 'a');
        ft_freelst(copy);
        push_swap(&stack_a, &stack_b);
        print_list(stack_a, 'a');
        ft_freelst(stack_a);
        ft_freelst(stack_b);
    }
}

// int main(int ac, char **av)
// {
//     char **input = av;
//     char **new_input;
//     char **tmp;
//     t_list *stack;
//     t_list new;

//     stack = NULL;
//     while(*input)
//     {
//         tmp = ft_split(*input, ' ');
//         while (*tmp)
//         {
//             new = ft_lstnew(*tmp);
//         }
//     }
//     return 0;
// }