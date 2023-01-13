/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehuanmelo <tehuanmelo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:16:08 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/12 21:19:02 by tehuanmelo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../inc/libft.h"

void    print_error();
int     check_input(char **str, int size);
void    push_swap(t_list **stack_a, t_list **stack_b);
t_list  *create_stack_a(char **list_of_numbers);

void    ra(t_list **stack_a);
void    pb(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);

//Dont forget to delete this function 
void print_list(t_list *list, char c);

#endif