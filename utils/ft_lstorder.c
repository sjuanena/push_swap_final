/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:35:34 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:37:01 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstorder(t_list	*head)
{
	int	i;

	while (head)
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
