/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcontent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:31:23 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:31:30 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstcont(t_list *lst, int relative_place)
{
	int	count;

	count = 0;
	while (lst)
	{
		if (!lst->next)
			return (lst->content);
		if (relative_place > count++)
			lst = lst->next;
		else
			return (lst->content);
	}
	return (lst->content);
}
