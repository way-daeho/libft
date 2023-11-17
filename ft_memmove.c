/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:20:37 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 02:06:27 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	idx;
	size_t	ridx;

	if (dst == src || len == 0)
		return (dst);
	idx = 0;
	if (dst < src)
	{
		while (idx < len)
		{
			*(char *)(dst + idx) = *(const char *)(src + idx);
			idx++;
		}
	}
	else
	{
		while (idx < len)
		{
			ridx = len - idx - 1;
			*(char *)(dst + ridx) = *(const char *)(src + ridx);
			idx++;
		}
	}
	return (dst);
}
