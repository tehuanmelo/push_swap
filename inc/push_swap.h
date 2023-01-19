/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:08 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/19 14:21:31 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../inc/libft.h"

void    print_error();
void    push_swap(t_list **stack_a, t_list **stack_b);
t_list  *create_stack_a(char **list_of_numbers);

void    ra(t_list **stack_a);
void    rra(t_list **stack_a);
void    pb(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);
void    sa(t_list **stack_a);

//Dont forget to delete this function 
void    print_list(t_list *list, char c);
int     ps_atoi(const char *str);
void    index_stack(t_list *unsorted, t_list *sorted);

#endif