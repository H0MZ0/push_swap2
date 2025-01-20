/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:39:28 by hakader           #+#    #+#             */
/*   Updated: 2025/01/20 15:31:50 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_error(t_stack *list, char **str, int **numbers, int size)
// {
// 	int	i;

// 	i = 0;
// 	while(!(list->content))
// 	{
// 		free(list->content);
// 		list = list->next;
// 	}
// 	while (str[i])
// 		free (str[i++]);
// 	i = 0;
// 	while (size > 0)
// 		free(numbers[size--]);
// 	write (1, "Error\n", 6);
// 	exit(1);
// }

int ft_check_reapate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->content == value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_isdigit(char *c)
{
	if (!c)
		return (0);
	if (*c == '-' || *c == '+')
		c++;
	while (*c)
	{
		if (!(*c >= '0' && *c <= '9'))
			return(0);
		c++;
	}
	return (1);
}

int stack_is_empty(t_stack *stack)
{
	if (!stack)
		return (1);
	return (0);
}

int check_spaces(int *av, int size)
{
	int i;

	i = 0;
	if (!av)
		return (0);
	while (av[i] == 32 && i < size)
		i++;
	return (0);
}
