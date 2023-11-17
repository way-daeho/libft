/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:23:36 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/15 01:00:33 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intsize(int n);
static char		*invert2char(int n, size_t size, char *result);

char	*ft_itoa(int n)
{
	size_t	size;
	char	*result;

	size = ft_intsize(n);
	if (n < 0)
		result = (char *)ft_calloc(size + 2, sizeof(char));
	else
		result = (char *)ft_calloc(size + 1, sizeof(char));
	if (!result)
		return (NULL);
	result = invert2char(n, size, result);
	return (result);
}

static size_t	ft_intsize(int n)
{
	size_t		len;

	len = 0;
	if (n == -2147483648)
		return (10);
	if (n <= 0)
		n *= -1;
	if (n == 0)
		return (1);
	while (10 <= n)
	{
		len++;
		n /= 10;
	}
	if ((1 <= (n % 10)) && ((n % 10) <= 9))
		len++;
	return (len);
}

static char	*invert2char(int n, size_t size, char *result)
{
	size_t		idx;
	long long	ll;

	ll = n;
	idx = size;
	if (ll < 0)
	{
		result[0] = '-';
		result[++idx] = 0;
		ll *= -1;
	}
	else
		result[idx] = 0;
	if (ll == 0)
		result[0] = '0';
	while (10 <= ll)
	{
		result[--idx] = ((ll % 10) + 48);
		ll /= 10;
	}
	if ((1 <= ll) && (ll <= 9))
		result[--idx] = ((ll % 10) + 48);
	return (result);
}
