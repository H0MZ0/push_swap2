/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:14:07 by hakader           #+#    #+#             */
/*   Updated: 2025/01/19 15:15:16 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_swap_strs(char **dest, char **src)
{
	char	*tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

void ft_bubble(char **strs)
{
	int i, swapped;
	char **current;

	do {
		swapped = 0;
		current = strs;
		while (*(current + 1))
		{
			if (strcmp(*current, *(current + 1)) > 0)
			{
				ft_swap_strs(current, current + 1);
				swapped = 1;
			}
			current++;
		}
	} while (swapped);
}

// int main(int ac, char **strs)
// {
//     // char *strs[] = {"8", "22", "7", "3", NULL};
//     ft_bubble(strs);
// 	// ft_repeat(strs);

//     for (int i = 1; strs[i]; i++)
//         printf("%s\n", strs[i]);

//     return 0;
// }