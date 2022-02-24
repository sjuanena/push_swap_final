/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:32:06 by sjuanena          #+#    #+#             */
/*   Updated: 2022/02/17 18:31:32 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				chunk;
	struct s_list	*next;
}	t_list;

typedef struct s_ptrs
{
	t_list	*head_a;
	t_list	*first_a;
	t_list	*tail_a;
	t_list	*newtail_a;
	t_list	*head_b;
	t_list	*first_b;
	t_list	*tail_b;
	t_list	*newtail_b;
}	t_ptrs;

void	swap_a(t_ptrs	*ptr);
void	swap_b(t_ptrs	*ptr);
void	swap_swap(t_ptrs	*ptr);
void	push_a(t_ptrs	*ptr);
void	push_b(t_ptrs	*ptr);
void	rotate_a(t_ptrs	*ptr);
void	rotate_b(t_ptrs	*ptr);
void	rotate_rotate(t_ptrs	*ptr);
void	reverse_rotate_a(t_ptrs	*ptr);
void	reverse_rotate_b(t_ptrs	*ptr);
void	reverse_rotate_rotate(t_ptrs	*ptr);
char	**ft_split(char const *s, char c);
size_t	ft_strlcpy(char	*dst, char	*src, size_t dstsize);
int		ft_atoi(const char *str);
long	ft_asctoint(char *str);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
void	ft_lstfree(t_ptrs	*ptr);
t_list	*ft_lstlast(t_list	*lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstmove(t_list	*lst, int i);
int		ft_lstsize(t_list *lst);
void	*ft_memset(void *b, int c, size_t len);
int		ft_dups(t_list *heada);
int		ft_lstorder(t_list *head);
int		ft_lstcont(t_list *lst, int i);
int		ft_lstchunkorder(t_list *head, int i);
int		ft_lstmed(t_list *head);
int		ft_biggest(t_list *heada);
int		ft_smallest(t_list *head);
void	ft_lstzero(t_list *lst);
void	ft_algorithm(t_ptrs *ptr);
void	ft_sortstacks(t_ptrs *ptr);
void	ft_pivot(t_ptrs ptr);
void	ft_sort_three(t_ptrs *ptr);
void	ft_sort_five(t_ptrs *ptr);
void	ft_chunktoa(t_ptrs *ptr);
void	ft_alltoa(t_ptrs *ptr);
int		ft_theresmaller(t_list *head, int med);
int		ft_theresbigger(t_list *head, int med);
int		ft_sorting(t_ptrs *ptr);

#endif
