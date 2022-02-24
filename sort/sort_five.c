/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:41:41 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 19:12:01 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_smallpost(t_list *lst, int smallest)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		if (lst->content == smallest)
			return (i);
		if (!lst->next)
			return (i);
		lst = lst->next;
	}
	return (i);
}

void	ft_sort_five(t_ptrs *ptr)
{
	int	smallest;

	if (!ft_lstorder(ptr->head_a))
		return ;
	while (ft_lstsize(ptr->head_a) > 3 && ft_lstsize(ptr->head_b) < 2)
	{
		smallest = ft_smallest(ptr->head_a);
		if (ptr->head_a->content != smallest)
		{
			if (ft_smallpost(ptr->head_a, smallest) < 3)
				rotate_a(ptr);
			else
				reverse_rotate_a(ptr);
		}
		else
			push_b(ptr);
	}
	while (ft_lstorder(ptr->head_a))
	{
		if (!ft_lstorder(ptr->head_b))
			swap_b(ptr);
		ft_sort_three(ptr);
	}
	push_a(ptr);
	push_a(ptr);
}
