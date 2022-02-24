/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:05:54 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:56:41 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_b(t_ptrs *ptr)
{
	int	i;

	if (ptr->head_b->next == NULL)
		return ;
	i = ft_lstsize(ptr->head_b);
	ptr->first_b = ptr->head_b;
	ptr->tail_b = ft_lstlast(ptr->head_b);
	ptr->newtail_b = ft_lstmove(ptr->head_b, (i - 2));
	ptr->newtail_b->next = NULL;
	ptr->tail_b->next = ptr->first_b;
	ptr->head_b = ptr->tail_b;
	write(1, "rrb\n", 4);
}
