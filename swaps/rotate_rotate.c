/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:07:48 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 18:02:04 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_rotate(t_ptrs *ptr)
{
	ptr->first_a = ptr->head_a;
	ptr->head_a = ptr->head_a->next;
	ptr->first_a->next = NULL;
	ptr->tail_a = ft_lstlast(ptr->head_a);
	ptr->tail_a->next = ptr->first_a;
	ptr->first_b = ptr->head_b;
	ptr->head_b = ptr->head_b->next;
	ptr->first_b->next = NULL;
	ptr->tail_b = ft_lstlast(ptr->head_b);
	ptr->tail_b->next = ptr->first_b;
	write(1, "rr\n", 3);
}
