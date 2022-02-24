/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:57 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:35:06 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*elm;

	elm = (t_list *)malloc(sizeof(*elm));
	if (!elm)
		return (NULL);
	elm->chunk = 0;
	elm->content = content;
	elm->next = NULL;
	return (elm);
}
