/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:37:47 by daehlee           #+#    #+#             */
/*   Updated: 2023/11/17 18:15:10 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	idx;
	char			*map;

	len = ft_strlen(s);
	map = (char *)ft_calloc(len + 1, sizeof(char));
	if (!map)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		map[idx] = f(idx, s[idx]);
		idx++;
	}
	return (map);
}
