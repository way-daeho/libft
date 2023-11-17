/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:59:41 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/10 18:47:20 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (((unsigned char *)s1)[idx] != (((unsigned char *)s2)[idx]))
			return (((unsigned char *)s1)[idx] - ((unsigned char *)s2)[idx]);
		idx++;
	}
	return (0);
}
