/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/20 15:59:45 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/push_swap.h"

/* free_array free the memory allocated to the string created from ft_split */
void	free_array(char **str)
{
	char	**new;
	int		len;
	int		i;

	new = str;
	len = 0;
	while (*new ++)
		len++;
	i = 0;
	while (i < len)
		free(str[i++]);
	free(str);
}

/* Inside the create_stack function if the atoi detects any error it will
return a zero, so we have to check whether it is just an error or a
valid zero input. The function iterates through the string if the first
value is a '+' sign or a '-' sign increments and checks if the next
value is a '0' if not return false. */
int	check_zero(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		while (*str == '0')
			str++;
		if (*str)
			return (0);
	}
	return (1);
}

/* create_stack function iterates over the input, converts the string
into an integer and assigns its value to the content variable.
Then creates a new node and assign the content variable as its data value.
Lastly, insert the new node as the last node on the stack. */
t_list	*create_stack(char **input)
{
	t_list	*list;
	t_list	*node;
	char	**tmp;
	int		number;
	int		i;

	list = NULL;
	while (*(++input))
	{
		tmp = ft_split(*input, ' ');
		i = -1;
		while (tmp[++i])
		{
			number = ps_atoi(tmp[i]);
			if (number == 0)
			{
				if (!(check_zero(tmp[i])))
				{
					free_array(tmp);
                    ps_freelist(list);
					print_error_exit();
				}
			}
			node = ft_lstnew(number);
			ft_lstadd_back(&list, node);
		}
		free_array(tmp);
	}
	return (list);
}
