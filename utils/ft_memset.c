/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:39:42 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/09 17:39:54 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;
	size_t			i;

	i = 0;
	aux = (unsigned char *)b;
	while (i < len)
		aux[i++] = c;
	return (aux);
}
