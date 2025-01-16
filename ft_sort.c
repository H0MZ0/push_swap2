/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:14:07 by hakader           #+#    #+#             */
/*   Updated: 2025/01/16 17:11:52 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	ft_swap_strs(char *dest, char *src)
{
	char	*tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

void	ft_bubble(char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (strs[i] || strs[j])
	{
		if (strs[i] > strs[j])
		{
			ft_swap_strs(strs[i], strs[j]);
			i++;
		}
		j++;
	}
}

// int main()
// {
// 	char dest[5] = "hello";
// 	char src[5] = "world";
// 	ft_swap_strs(dest, src);
// 	printf (dest, src);
// }