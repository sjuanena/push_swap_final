/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchunkmed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:29:41 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:29:49 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_get_pivot(t_list *head, int ref)
{
	int		catched;
	int		min;
	t_list	*temp;
	int		chunk;

	chunk = head->chunk;
	temp = head;
	catched = 2147483647;
	while (ref-- > 0 && head->chunk == chunk)
	{
		min = -2147483648;
		while (head && head->next)
		{
			if (head->content > min && head->content < catched)
				min = head->content;
			head = head->next;
		}
		catched = min;
		head = temp;
	}
	return (catched);
}

static int	ft_chunksize(t_list *head)
{
	int	i;
	int	j;

	i = head->chunk;
	j = 0;
	while (head)
	{
		if (!head->next)
			return (j);
		if (head->chunk != i)
			return (j);
		head = head->next;
		j++;
	}
	return (j);
}

int	ft_lstchunkmed(t_list *head)
{
	int	ref;
	int	med;
	int	chunk;

	med = 0;
	ref = 1;
	chunk = head->chunk;
	if (ft_chunksize(head) % 2 == 0)
		ref = (ft_chunksize(head) / 2);
	else if (ft_chunksize(head) % 2 == 1)
		ref = ((ft_chunksize(head) / 2));
	if (ref == 0)
		ref = 1;
	med = ft_get_pivot(head, ref);
	return (med);
}
