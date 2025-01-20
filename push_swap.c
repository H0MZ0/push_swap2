/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:37:30 by hakader           #+#    #+#             */
/*   Updated: 2025/01/20 13:29:19 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_args(char **av)
{
	int i;
	char *join;
	char *tmp;
	
	i = 1;
	join = NULL;
	while (av[i])
	{
		tmp = join;
		join = ft_strjoin(join, av[i]);
		if (tmp)
			free(tmp);
		i++;
	}
	return (join);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	while (i--)
		free(arr[i]);
	free(arr);
}

void	ft_repeat(int **strs, int size)
{
	int	i, *sorted;

	i = 0;
	sorted = *strs;
	while (i < size)
	{
		if (sorted[i] == sorted[i + 1])
		{
			write (1, "Error\n", 6);
			free(*strs);
			exit(1);
		}
		i++;
	}
}

int	strtoint(char **av, int **sorted)
{
	int	(i), (size), (*arr);
	i = 0;
	size = 0;
	while (av[size])
		size++;
	arr = malloc(sizeof(int) * size);
	while (av[i])
	{
		arr[i] = ft_atoi(av[i]);
		i++;
	}
	*sorted = arr;
	return (size - 1);
}

int main (int ac, char **av)
{
	char	*arr;
	int		*sorted;
	t_stack *stack_a;
	stack_a = NULL;
	int size;
	int i = 0;
	if (ac <= 1)
		return (1);
	arr = join_args(av);
	av = ft_split(arr, ' ');
	free(arr);
	if(ft_isnum(av) == 0)
		return (write (1, "Error\n", 6), 0);
	while (av[i])
		i++;
	while (i--)
		push_stack(&stack_a, ft_atoi(av[i]));
	size = strtoint(av, &sorted);
	ft_bubble(sorted, size);
	ft_repeat(&sorted, size);
	while (stack_a)
	{
		printf("%d\n",stack_a->content);
		stack_a = stack_a->next;
	}
	free(stack_a);
	// while (size+1)
	// {
	// 	printf("%d\n", sorted[i++]);
	// 	size--;
	// }

	free_arr(av);
	i = 0;
	return (0);
}
