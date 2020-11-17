/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:51:18 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/17 19:59:25 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_clear(char **a)
{
	int i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (0);
}

static char		*ft_string(char **dst, int b, int i, const char *src)
{
	char *dst1;
	char *sub;
	sub = ft_substr((char *)src, i, b - i);
    dst1 = (char *)malloc(ft_strlen(sub));
	if (dst1 == 0)
	{
	    ft_clear(dst);
		return (0);
	}
	dst1 = sub;
	return (dst1);
}

static char		**ft_strsplit(char **dst, const char *src, char c, int i)
{
	int b;
	int z;

	b = 0;
	z = 0;
	while (*(src + b))
	{
		if (*(src + b) == c)
		{
			b++;
			i++;
		}
		else
		{
			while (*(src + b) != c && *(src + b) != '\0')
				b++;
			if (!(dst[z] = ft_string(dst, b, i, src)))
				return (0);
			z++;
			if (!*(src + b))
				break ;
			i = ++b;
		}
	}
	return (dst);
}

static int		ft_wordcount(const char *src, char c)
{
	int		i;
	int		count;

	if (src == 0)
		return (0);
	i = 0;
	count = 0;
	while (*(src + i))
	{
		if (*(src + i) == c && *(src + i + 1) != c && *(src + i + 1) != '\0')
			count++;
		i++;
	}
	if (count == 0)
		count = 1;
	return (count);
}

char			**ft_split(char const *src, char c)
{
	int		i;
	int		a;
	char	**dst;
	char	*p;

	i = 0;
	p = &c;
	if (!src || !c)
		return (0);
	if (!(src = ft_strtrim(src, p)))
        return (0);
	if (*src == 0)
		a = 1;
	else
	{
		if (ft_wordcount(src, c) == 1)
			a = ft_wordcount(src, c) + 1;
		else
			a = ft_wordcount(src, c) + 2;
	}
	dst = (char**)malloc(a * sizeof(char*));
	if (dst == 0)
		return (0);
	dst = ft_strsplit(dst, src, c, i);
	dst[a - 1] = NULL;
	return (dst);
}
