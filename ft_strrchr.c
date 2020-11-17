/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:19:23 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 17:23:36 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	sym;
	int				i;

	sym = c;
	i = ft_strlen(s);
	if (sym == '\0')
	{
		s = s + i;
		return ((char *)s);
	}
	while (--i >= 0)
	{
		if (*(s + i) == sym)
			return ((char *)s + i);
	}
	return (NULL);
}
