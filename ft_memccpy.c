/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:42:49 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:45:29 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;
	unsigned char		sym;

	d = dst;
	s = src;
	i = 0;
	sym = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == sym)
		{
			i++;
			return (d + i);
		}
		i++;
	}
	return (NULL);
}
