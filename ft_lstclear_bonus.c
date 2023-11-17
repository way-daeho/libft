/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 01:28:19 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/18 18:23:53 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	if (!lst)
		return ;
	if (!*del)
		return ;
	while (*lst)
	{
		next_lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_lst;
	}
}
