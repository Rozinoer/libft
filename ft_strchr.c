/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:54:13 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 16:56:38 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char sym;

	sym = c;
	if (sym == '\0')
	{
		s = s + ft_strlen(s);
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == sym)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
