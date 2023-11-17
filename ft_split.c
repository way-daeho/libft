/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:45:28 by daehlee           #+#    #+#             */
/*   Updated: 2023/10/18 12:16:34 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cntcol(char const *s, char c);
static int		ft_ischar(char target, char c);
static void		ft_dstcpy(char *dest, char const *s, size_t tmp, size_t idx);
static size_t	ft_malloc_check(char **dest, size_t col);

char	**ft_split(char const *s, char c)
{
	char		**dst;
	size_t		tmp;
	size_t		idx;
	size_t		col;

	dst = (char **)ft_calloc(ft_cntcol(s, c), sizeof(char *));
	idx = 0;
	col = 0;
	while (s[idx] && dst)
	{
		if (!ft_ischar(s[idx], c))
		{
			tmp = idx;
			while (s[idx] && !ft_ischar(s[idx], c))
				++idx;
			dst[col] = (char *)ft_calloc(idx - tmp + 1, sizeof(char));
			if (ft_malloc_check(dst, col))
				return (0);
			ft_dstcpy(dst[col++], s, tmp, idx);
		}
		else
			idx++;
		dst[col] = NULL;
	}
	return (dst);
}

static int	ft_ischar(char target, char c)
{
	if (target == c)
		return (1);
	else
		return (0);
}

static size_t	ft_cntcol(char const *s, char c)
{
	size_t	colcnt;
	size_t	idx;

	colcnt = 0;
	idx = 0;
	while (s[idx])
	{
		if (!ft_ischar(s[idx], c))
		{
			colcnt++;
			while (s[idx] && !ft_ischar(s[idx], c))
				idx++;
		}
		else
			idx++;
	}
	return (colcnt + 1);
}

static void	ft_dstcpy(char *dst, char const *s, size_t tmp, size_t idx)
{
	size_t	i;

	i = 0;
	while (tmp < idx)
	{
		dst[i] = s[tmp];
		i++;
		tmp++;
	}
	dst[i] = 0;
}

static size_t	ft_malloc_check(char **dst, size_t col)
{
	size_t	i;

	i = 0;
	if (dst[col])
		return (0);
	while (dst[i])
	{
		free(dst[i]);
		i++;
	}
	free(dst);
	dst = 0;
	return (1);
}
