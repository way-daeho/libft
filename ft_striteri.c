/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:05:07 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/14 17:32:32 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	idx;
	unsigned int	len;

	idx = 0;
	len = ft_strlen(s);
	while (idx < len)
	{
		f(idx, s + idx);
		idx++;
	}
}
