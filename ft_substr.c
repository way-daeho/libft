/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:52:27 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 15:54:19 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	idx;

	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (0);
	idx = 0;
	while ((idx < len))
	{
		substr[idx] = s[start + idx];
		idx++;
	}
	return (substr);
}
