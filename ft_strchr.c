/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:52:04 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 01:25:29 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	idx;

	idx = 0;
	while (idx <= ft_strlen(string))
	{
		if (string[idx] == (char)c)
			return (&((char *)string)[idx]);
		idx++;
	}
	return (0);
}
