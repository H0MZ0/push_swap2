/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:14:07 by hakader           #+#    #+#             */
/*   Updated: 2025/01/20 12:11:12 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_strcmp(char *str, char *src)
// {
// 	int i;

// 	i = 0;
// 	if (!str || !src)
// 		return (0);
// 	while (str[i] && src[i])
// 	{
// 		if (str[i] != src[i])
// 			return (str[i] - src[i]);
// 		i++;
// 	}
// 	return (str[i] - src[i]);
// }

// void	ft_swap_strs(int dest, int src)
// {
// 	int	tmp;

// 	tmp = src;
// 	src = dest;
// 	dest = tmp;
// }

void ft_bubble(int *strs, int size)
{
	int	i, j, swapped;

	i = 1;
	while (i <= size)
	{
		j = i - 1;
		swapped = strs[i];
		while (j >= 0)
		{
			if (strs[j] > swapped)
			{
				strs[j + 1] = strs[j];
				strs[j] = swapped;
			}
			j--;
		}
		i++;
	}
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