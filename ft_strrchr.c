/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:11:58 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/16 02:18:50 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen(s);
	while (0 <= idx)
	{
		if (*(s + idx) == (char)c)
			return ((char *)(s + idx));
		idx--;
	}
	return (NULL);
}
