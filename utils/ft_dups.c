/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dups.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:25:44 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:25:54 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_that(t_list *lst, int i)
{
	while (lst)
	{
		if (!lst->next)
			return (0);
		lst = lst->next;
		if (lst->content == i)
		{
			write(2, "Error\n", 6);
			exit (0);
		}
	}
	return (0);
}

int	ft_dups(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (0);
		if (ft_that(lst, lst->content))
			return (1);
		lst = lst->next;
	}
	return (0);
}
