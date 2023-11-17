/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:54:23 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 16:40:32 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcat(char *dst, const char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(len + 1, sizeof(char));
	if (!join)
		return (0);
	ft_strcat(join, s1);
	ft_strcat(join, s2);
	return (join);
}

static void	ft_strcat(char *dst, char const *src)
{
	size_t	dst_size;
	size_t	idx;

	dst_size = (size_t)ft_strlen(dst);
	idx = 0;
	while (src[idx])
	{
		dst[dst_size + idx] = src[idx];
		idx++;
	}
}
