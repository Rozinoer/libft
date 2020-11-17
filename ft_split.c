/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:51:18 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 18:00:04 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_charset(char c)
{
    char *sym;

    (sym = (char *)malloc(2 * sizeof(char)));
    if (sym == 0)
        return (0);
    sym[0] = c;
    sym[1] = '\0';
    return (sym);
}

static char *ft_string(int b, int i, const char *src)
{
    char *dst;
    char *sub;

    sub = ft_substr((char *)src, i, b - i);
    if (!(dst = (char *)malloc(ft_strlen(sub))))
        return (0);
    dst = sub;
    return (dst);
}

static char	**ft_strsplit(char **dst, const char *src, char c, int i)
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
            dst[z] = ft_string(b,i,src);
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

char	**ft_split(char const *src, char c)
{
	int		i;
	int		a;
	char	**dst;

	i = 0;
	if (!src || !c)
		return (0);
    src = ft_strtrim(src, ft_charset(c));
	a = ft_wordcount(src, c) + 2;
	dst = (char**)malloc(a * sizeof(char*));
	if (dst == 0)
		return (0);
	dst = ft_strsplit(dst, src, c, i);
	dst[a - 1] = NULL;
	return (dst);
}
