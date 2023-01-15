/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortlst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/15 18:46:25 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void ft_sortlst(t_list **list)
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
            if (*(int *)i->data > *(int *)j->data)
            {
                tmp = *(int *)i->data;
                *(int *)i->data = *(int *)j->data;
                *(int *)j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
}
