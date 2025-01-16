/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:37:30 by hakader           #+#    #+#             */
/*   Updated: 2025/01/16 11:08:39 by hakader          ###   ########.fr       */
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
int main (int ac, char **av)
{
	char	*arr;
	t_list *stack_a;
	stack_a = NULL;
	int i = 0;

	arr = join_args(av);
	av = ft_split(arr, ' ');
	
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	
}