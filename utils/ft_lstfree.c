/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:32:06 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 19:00:36 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstfree(t_ptrs *ptr)
{
	t_list	*temp;

	while (ptr->head_a && ft_lstsize(ptr->head_a) != 1)
	{
		temp = ptr->head_a;
		ptr->head_a = ptr->head_a->next;
		free(temp);
	}
	while (ptr->head_b)
	{
		temp = ptr->head_b;
		ptr->head_b = ptr->head_b->next;
		free(temp);
	}
	free(ptr->head_a);
}
