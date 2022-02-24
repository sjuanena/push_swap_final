/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:39:02 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:39:11 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstzero(t_list *lst)
{
	while (lst)
	{	
		lst->chunk = 0;
		if (!lst->next)
			return ;
		lst = lst->next;
	}
	return ;
}
