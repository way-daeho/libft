/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:49:01 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/10 16:16:19 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while ((s1[idx] != '\0' || s2[idx] != '\0') && idx < n)
	{
		if (s1[idx] != s2[idx])
			return (((unsigned char *)s1)[idx] - ((unsigned char *)s2)[idx]);
		idx++;
	}
	return (0);
}
