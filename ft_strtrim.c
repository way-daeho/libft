/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:30:28 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/16 01:38:58 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isset(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	head_idx;
	size_t	tail_idx;

	head_idx = 0;
	tail_idx = ft_strlen(s1) - 1;
	while (ft_isset(s1[head_idx], set))
		head_idx++;
	while (ft_isset(s1[tail_idx], set))
		tail_idx--;
	return (ft_substr(s1, head_idx, (tail_idx - head_idx + 1)));
}

static size_t	ft_isset(char c, char const *set)
{
	size_t	idx;

	idx = 0;
	while (set[idx])
	{
		if (c == set[idx])
			return (1);
		idx++;
	}
	return (0);
}
