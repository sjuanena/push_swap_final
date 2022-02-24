/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:07:08 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 17:57:42 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_ptrs *ptr)
{
	if (ptr->head_a->next == NULL)
		return ;
	ptr->first_a = ptr->head_a;
	ptr->head_a = ptr->head_a->next;
	ptr->first_a->next = NULL;
	ptr->tail_a = ft_lstlast(ptr->head_a);
	ptr->tail_a->next = ptr->first_a;
	write(1, "ra\n", 3);
}
