/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:49:13 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 18:51:17 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_chunkto_a(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	i;

	i = 0;
	chunk = ptr->head_b->chunk;
	med = ft_lstmed(ptr->head_b);
	while (ptr->head_b && ptr->head_b->chunk == chunk && ptr->head_a->content)
	{
		if (ptr->head_b->content >= med)
		{
			push_a(ptr);
			ptr->head_a->chunk = 0;
		}
		else
		{
			rotate_b(ptr);
			i++;
		}
	}
	while (i > 0)
	{
		reverse_rotate_b(ptr);
		i--;
	}
}

void	ft_allto_a(t_ptrs *ptr)
{
	while (ptr->head_b)
	{
		if (!ptr->head_b->next)
			return ;
		push_a(ptr);
	}
}

int	ft_theresbigger(t_list *head, int med)
{
	while (head)
	{
		if (head->content >= med)
			return (1);
		if (!head->next)
			return (0);
		head = head->next;
	}
	return (0);
}

int	ft_theresmaller(t_list *head, int med)
{
	while (head)
	{
		if (head->content < med)
			return (1);
		if (!head->next)
			return (0);
		head = head->next;
	}
	return (0);
}
