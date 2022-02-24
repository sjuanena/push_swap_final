/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:06:51 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:57:14 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_rotate(t_ptrs *ptr)
{
	int	i;
	int	j;

	if (ptr->head_a->next == NULL)
		return ;
	i = ft_lstsize(ptr->head_a);
	ptr->first_a = ptr->head_a;
	ptr->tail_a = ft_lstlast(ptr->head_a);
	ptr->newtail_a = ft_lstmove(ptr->head_a, (i - 2));
	ptr->newtail_a->next = NULL;
	ptr->tail_a->next = ptr->first_a;
	ptr->head_a = ptr->tail_a;
	if (ptr->head_b->next == NULL)
		return ;
	j = ft_lstsize(ptr->head_b);
	ptr->first_b = ptr->head_b;
	ptr->tail_b = ft_lstlast(ptr->head_b);
	ptr->newtail_b = ft_lstmove(ptr->head_b, (j - 2));
	ptr->newtail_b->next = NULL;
	ptr->tail_b->next = ptr->first_b;
	ptr->head_b = ptr->tail_b;
	write(1, "rrr\n", 4);
}
