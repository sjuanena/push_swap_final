/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:07:31 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:57:55 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_ptrs *ptr)
{
	if (ptr->head_b->next == NULL)
		return ;
	ptr->first_b = ptr->head_b;
	ptr->head_b = ptr->head_b->next;
	ptr->first_b->next = NULL;
	ptr->tail_b = ft_lstlast(ptr->head_b);
	ptr->tail_b->next = ptr->first_b;
	write(1, "rb\n", 3);
}
