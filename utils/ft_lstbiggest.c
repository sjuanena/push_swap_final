/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbiggest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:28:12 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:28:20 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_biggest(t_list *heada)
{
	int	i;

	i = heada->content;
	while (heada)
	{
		if (i < heada->content)
			i = heada->content;
		if (!heada->next)
			return (i);
		heada = heada->next;
	}
	return (i);
}
