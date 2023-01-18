/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-melo <tde-melo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:28:41 by tehuanmelo        #+#    #+#             */
/*   Updated: 2023/01/18 20:48:51 by tde-melo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../inc/libft.h"

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

int check_zero(char *str)
{
    while(*str)
    {
        if (*str == '-' || *str == '+')
            str++;
        if (*str == '0')
            return (1);
        else
            return (0);
    }
}

/* create_stack_a function iterates over the input, converts the string 
into an integer and assigns its value to the content variable. 
Then creates a new node and assign the content variable as its data value. 
Lastly, insert the new node into the stack. 
"""Due our struct has a void pointer to receives the data, we have to 
allocate memory for our variable content, if not the integer value
will disapear on the stack after the function exit."""" */

t_list *create_stack_a(char **input)
{
    t_list *list;
    t_list *node;
    char **tmp;
    int *content;

    list = NULL;
    while (*(++input))
    {
        tmp = ft_split(*input, ' ');
        while (*tmp)
        {
            content = malloc(sizeof(int));
            *content = ps_atoi(*tmp);
            if (*content == 0)
            {
                if (!(check_zero(*tmp)))
                    return NULL;
            }
            node = ft_lstnew(content);
            ft_lstadd_back(&list, node); 
            tmp++;
        }
    }
    return list;
}
