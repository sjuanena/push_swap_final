/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:08:05 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/15 19:30:13 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_ptrs *ptr)
{
	int	i;

	i = ptr->head_a->next->content;
	ptr->head_a->next->content = ptr->head_a->content;
	ptr->head_a->content = i;
	write(1, "sa\n", 3);
}
