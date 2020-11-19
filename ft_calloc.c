/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:55:06 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 14:55:37 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *dst;

	dst = malloc(count * size);
	if (dst == NULL)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}
