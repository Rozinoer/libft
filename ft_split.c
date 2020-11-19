/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:51:18 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/19 18:31:17 by dmyesha          ###   ########.fr       */
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

	dst1 = ft_substr((char *)src, i, b - i);
	if (dst1 == 0)
	{
		ft_clear(dst);
		return (0);
	}
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

static int		ft_count_words(char const *s, char c)
{
	int index;
	int count_words;

	index = 0;
	count_words = 0;
	if (s[0] != c)
		count_words++;
	while (s[index + 1])
	{
		if (s[index] == c && s[index + 1] != c)
			count_words++;
		index++;
	}
	return (count_words);
}

char			**ft_split(char const *src, char c)
{
	int		i;
	int		a;
	char	**dst;

	i = 0;
	if (!src || !c)
		return (0);
	if (*src == '\0')
		a = 1;
	else
		a = ft_count_words(src, c) + 1;
	dst = (char**)malloc(a * sizeof(char*));
	if (dst == 0)
		return (0);
	dst = ft_strsplit(dst, src, c, i);
	dst[a - 1] = NULL;
	return (dst);
}
