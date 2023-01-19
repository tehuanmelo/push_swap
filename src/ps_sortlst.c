/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/19 22:45:45 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void ps_sortlist(t_list **list)
{
    t_list *i;
    t_list *j;
    int tmp;

    i = *list;
    while (i)
    {
        j = i->next;
        while (j)
        {
            if (i->data > j->data)
            {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
