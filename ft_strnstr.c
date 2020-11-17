/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:16:18 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 17:18:27 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strnlen(const char *s, size_t maxlen)
{
    if (ft_strlen(s) > maxlen)
        return (maxlen);
    else
        return (ft_strlen(s));
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack) || len == 0)
		return (0);
	if (0 == (needle_len = ft_strnlen(needle, len)))
		return (char *)haystack;
	while (i++ <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0]) &&
				(0 == ft_strncmp(haystack, needle, needle_len)))
			return (char *)haystack;
		haystack++;
	}
	return (0);
}
