/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchunkorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:30:36 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:30:42 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstchunkorder(t_list	*head, int chunk)
{
	int	i;

	while (head->chunk == chunk)
	{
		if (!head->next)
			return (0);
		i = head->content;
		head = head->next;
		if (i > head->content)
			return (1);
	}
	return (0);
}
