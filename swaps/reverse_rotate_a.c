/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:05:33 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:56:22 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_ptrs *ptr)
{
	int	i;

	if (ptr->head_a->next == NULL)
		return ;
	i = ft_lstsize(ptr->head_a);
	ptr->first_a = ptr->head_a;
	ptr->tail_a = ft_lstlast(ptr->head_a);
	ptr->newtail_a = ft_lstmove(ptr->head_a, (i - 2));
	ptr->newtail_a->next = NULL;
	ptr->tail_a->next = ptr->first_a;
	ptr->head_a = ptr->tail_a;
	write(1, "rra\n", 4);
}
