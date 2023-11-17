/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:15:51 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 01:32:29 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystck, const char *needle, size_t len)
{
	size_t	idx;
	size_t	needle_len;
	size_t	haystck_len;

	idx = 0;
	needle_len = ft_strlen(needle);
	haystck_len = ft_strlen(haystck);
	if (!ft_strlen(needle))
		return ((char *)haystck);
	while ((idx + ft_strlen(needle) <= len) && needle_len <= haystck_len)
	{
		if (haystck[idx] == *needle)
			if (!(ft_memcmp(&haystck[idx], needle, needle_len)))
				return (&((char *)haystck)[idx]);
		idx++;
	}
	return (0);
}
