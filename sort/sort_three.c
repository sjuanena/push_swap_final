/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:54:46 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 18:52:24 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_ptrs *ptr)
{
	int	first;
	int	second;
	int	third;

	first = ptr->head_a->content;
	second = ft_lstcont(ptr->head_a, 1);
	third = ft_lstcont(ptr->head_a, 2);
	if (!ft_lstorder(ptr->head_a))
		return ;
	else if (first > second && second > third && third < second)
	{
		rotate_a(ptr);
		swap_a(ptr);
	}
	else if (first < second && second > third && first > third)
		reverse_rotate_a(ptr);
	else if (first < second && second > third && first < third)
	{
		swap_a(ptr);
		rotate_a(ptr);
	}
	else if (first > second && first < third && third > second)
		swap_a(ptr);
	else if (first > second && second < third && first > second)
		rotate_a(ptr);
}
