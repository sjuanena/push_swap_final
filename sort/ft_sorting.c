/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:17:47 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 19:11:56 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_firststep(t_ptrs *ptr)
{
	int		med;
	static int	chunk;

	med = ft_lstmed(ptr->head_a);
	chunk++;
	while (ft_theresmaller(ptr->head_a, med))
	{
		if (ptr->head_a->content < med)
		{
			ptr->head_a->chunk = chunk;
			push_b(ptr);
		}
		else
			rotate_a(ptr);
	}
}

static void	ft_second(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	rotates;

	rotates = 0;
	chunk = ptr->head_b->chunk;
	med = ft_lstmed(ptr->head_b);
	while (ft_theresbigger(ptr->head_b, med))
	{
		if (ptr->head_b->content >= med)
		{
			push_a(ptr);
		}
		else
		{
			rotate_b(ptr);
			rotates++;
		}
	}
	while (rotates-- != 0)
		reverse_rotate_b(ptr);
}

static void	ft_third(t_ptrs *ptr)
{
	int	med;
	int	chunk;
	int	rotates;

	rotates = 0;
	chunk = ptr->head_a->chunk;
	med = ft_lstmed(ptr->head_a);
	while (ft_theresmaller(ptr->head_a, med))
	{
		if (ptr->head_a->content < med)
		{
			ptr->head_a->chunk += 1;
			push_b(ptr);
		}
		else
		{
			rotate_a(ptr);
			rotates++;
		}
	}
	while (rotates-- != 0)
		reverse_rotate_a(ptr);
}

int	ft_sorting(t_ptrs *ptr)
{
	int	size;
	int	this;

	this = 0;
	size = ft_lstsize(ptr->head_a);
	while ((ft_lstorder(ptr->head_a)
			|| size != ft_lstsize(ptr->head_a)) || ptr->head_b != NULL)
	{
		while (ft_lstsize(ptr->head_a) > 2 && !this)
			ft_firststep(ptr);
		if (ft_lstsize(ptr->head_a) == 2 && ft_lstorder(ptr->head_a))
			swap_a(ptr);
		this = 1;
		if (ft_lstsize(ptr->head_a) != size)
		{
			if (!ft_lstorder(ptr->head_a))
				ft_second(ptr);
			if (!ft_lstorder(ptr->head_a))
				ft_lstzero(ptr->head_a);
			if (ft_lstchunkorder(ptr->head_a, ptr->head_a->chunk))
				ft_third(ptr);
		}
	}
	return (0);
}
