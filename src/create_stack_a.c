/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 16:37:23 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list *create_stack_a(char **input)
{
    t_list *list;
    t_list *node;
    int content;

    list = NULL;
    while (*(++input))
    {
        content = ft_atoi(*input);
        node = ft_lstnew(content);
        ft_lstadd_back(&list, node); 
    }
    
    return list;
}
