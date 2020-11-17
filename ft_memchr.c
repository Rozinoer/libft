/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:45:40 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:47:12 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*ar;
	char		sym;

	sym = c;
	ar = arr;
	while (n-- > 0)
	{
		if (*ar++ == sym)
		{
			arr = ar;
			return ((char *)--arr);
		}
	}
	return (NULL);
}
