/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:08:53 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:40:37 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_swap(t_ptrs *ptr)
{
	int	i;

	i = ptr->head_a->next->content;
	ptr->head_a->next->content = ptr->head_a->content;
	ptr->head_a->content = i;
	i = ptr->head_b->next->content;
	ptr->head_b->next->content = ptr->head_b->content;
	ptr->head_b->content = i;
	write(1, "ss\n", 3);
}
