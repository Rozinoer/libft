/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:47:35 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:50:45 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*arr1;
	unsigned const char		*arr2;

	arr1 = (unsigned const char *)s1;
	arr2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (arr1[i] > arr2[i] || arr2[i] > arr1[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
