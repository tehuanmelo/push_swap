/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:32:20 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/10 18:38:47 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parameters
**     lst:
**         The address of a pointer to the first link of
**         a list.
**     new:
**         The address of a pointer to the node to be
**         added to the list.
** Return value
**     None
** External functs.
**     None
** Description
**     Adds the node ’new’ at the beginning of the list.
*/

#include "../inc/push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(lst || new))
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
