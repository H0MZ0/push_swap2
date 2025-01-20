/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:19:08 by hakader           #+#    #+#             */
/*   Updated: 2025/01/20 15:41:42 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>


typedef struct list
{
    int content;
    struct list *next;
} t_stack;

char    *ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
int     ft_isnum(char **av);
void    ft_bubble(int *strs, int size);
void	ft_repeat(int **strs, int size);
int     ft_atoi(char *str);
int	ft_isdigit(char *c);
int stack_is_empty(t_stack *stack);
int	push_stack(t_stack **stack, int data);
int ft_check_reapate(t_stack *stack, int value);
int check_spaces(int *av, int size);
void ft_printstack(t_stack *stack);


#endif