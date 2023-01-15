/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:57:36 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 19:29:15 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void ft_freelst(t_list *list)
{
    t_list *tmp;
    
    tmp = list;
    while (tmp)
    {
        tmp = tmp->next;
        free(list->data);
        free(list);
        list = tmp;
    }
}