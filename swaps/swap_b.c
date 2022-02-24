/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:08:20 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:35:53 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_ptrs *ptr)
{
	int	i;

	i = ptr->head_b->next->content;
	ptr->head_b->next->content = ptr->head_b->content;
	ptr->head_b->content = i;
	write(1, "sb\n", 3);
}
