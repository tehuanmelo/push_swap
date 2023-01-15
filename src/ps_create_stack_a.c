/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 19:14:01 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../inc/libft.h"

/* create_stack_a function iterates over the input, converts the string 
into an integer and assigns its value to the content variable. 
Creates a new node and assign the content variable as its data value. 
Lastly, insert the new node into the stack. 
"""Due our struct has a void pointer to receives the data, we have to 
allocate memory for our variable content, if not the integer value
will disapear on the stack after the function exit."""" */

t_list *create_stack_a(char **input)
{
    t_list *list;
    t_list *node;
    int *content;

    list = NULL;
    while (*(++input))
    {
        content = malloc(sizeof(int));
        *content = ft_atoi(*input);
        node = ft_lstnew(content);
        ft_lstadd_back(&list, node); 
    }
    
    return list;
}
