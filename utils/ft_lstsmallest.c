/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsmallest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:38:12 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:38:28 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_smallest(t_list *heada)
{
	int	i;

	i = heada->content;
	while (heada)
	{
		if (i > heada->content)
			i = heada->content;
		if (!heada->next)
			return (i);
		heada = heada->next;
	}
	return (i);
}
