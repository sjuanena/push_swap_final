/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:15 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:27:21 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		(new)->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
