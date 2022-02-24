/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:53:59 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 18:33:11 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static int	ft_one_arg(t_list **head_a, char *argv)
{
	long long int	num;
	char			**split;
	int				i;

	i = 0;
	split = ft_split(argv, ' ');
	while (split[i] != (void *)0)
	{
		num = ft_asctoint(split[i++]);
		if (num == -2147483649)
		{
			write(1, "Error\n", 6);
			exit (0);
		}
		ft_lstadd_back(head_a, ft_lstnew(num));
	}
	ft_freesplit(split);
	return (1);
}

static int	ft_some_args(t_list **head_a, char **argv, int argc)
{
	long long int	num;
	int				i;

	i = 0;
	while (i < argc - 1)
	{
		num = ft_asctoint(argv[++i]);
		if (num == -2147483649)
		{
			write(1, "Error\n", 6);
			exit (0);
		}
		ft_lstadd_back(head_a, ft_lstnew(num));
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_ptrs	ptrs;

	ft_memset(&ptrs, 0, sizeof(t_ptrs));
	if (argc > 2)
		ft_some_args(&ptrs.head_a, argv, argc);
	else if (argc == 2)
		ft_one_arg(&ptrs.head_a, argv[1]);
	if (ft_dups(ptrs.head_a))
		return (1);
	if (ft_lstsize(ptrs.head_a) == 3)
		ft_sort_three(&ptrs);
	else if (ft_lstsize(ptrs.head_a) == 5)
		ft_sort_five(&ptrs);
	else if (ft_lstsize(ptrs.head_a) != 5)
		ft_sorting(&ptrs);
	ft_lstfree(&ptrs);
	return (0);
}
