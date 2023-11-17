/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:42:58 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/18 18:24:27 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	idx;

	idx = 0;
	if (!dst && !src)
		return (NULL);
	while (idx < n)
	{
		*(unsigned char *)(dst + idx) = *(unsigned char *)(src + idx);
		idx++;
	}
	return (dst);
}
