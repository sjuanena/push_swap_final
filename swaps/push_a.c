/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:04:50 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:43:21 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_ptrs *ptr)
{
	ptr->first_b = ptr->head_b;
	ptr->first_b = ptr->first_b->next;
	ft_lstadd_front(&ptr->head_a, ptr->head_b);
	ptr->head_b = ptr->first_b;
	write(1, "pa\n", 3);
}
