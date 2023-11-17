/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:30:38 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/11 01:31:04 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	size_t	size;

	size = ft_strlen(s1);
	buffer = ft_calloc(sizeof(char), size + 1);
	if (!buffer)
		return (NULL);
	buffer = (char *)ft_memcpy(buffer, s1, ft_strlen(s1));
	return (buffer);
}
