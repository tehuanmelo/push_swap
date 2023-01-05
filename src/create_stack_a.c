/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/05 06:23:32 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *create_stack_a(char **input)
{
    t_list *list;
    t_list *node;

    list = NULL;
    while (*(++input))
    {
        node = ft_lstnew(ft_atoi(*input));
        ft_lstadd_back(&list, node); 
    }
    return list;
}
