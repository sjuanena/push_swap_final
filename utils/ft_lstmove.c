/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:20 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:34:30 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstmove(t_list *lst, int relative_place)
{
	int		count;
	t_list	*temp;

	temp = lst;
	count = 0;
	if (lst)
	{
		while (relative_place > count++)
			temp = temp->next;
	}
	return (temp);
}
