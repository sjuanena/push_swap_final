/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:05:11 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:43:58 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_ptrs *ptr)
{
	ptr->first_a = ptr->head_a;
	ptr->first_a = ptr->first_a->next;
	ft_lstadd_front(&ptr->head_b, ptr->head_a);
	ptr->head_a = ptr->first_a;
	write(1, "pb\n", 3);
}
