/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:14:07 by hakader           #+#    #+#             */
/*   Updated: 2025/01/16 18:38:04 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_swap_strs(char **dest, char **src)
{
	char	*tmp;

	tmp = *src;
	*src = *dest;
	*dest = tmp;
}

void	ft_bubble(char **strs)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (strs[i])
	{
		while (strs[j])
		{
			if (strcmp(strs[i], strs[j]) < 0)
				ft_swap_strs (strs[i], strs[j]);
			j++;
		}
		i++;
		j = i + 1;
		if (strs[j] == NULL)
			break;
	}
}
int main()
{
	char *src;
	char *dest;
	src = "hello";
	dest = "world";
	ft_swap_strs(&dest, &src);
	printf ("%s\n%s",dest, src);
}