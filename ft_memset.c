/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:57:28 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:58:23 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*dst;
	unsigned char	sym;

	sym = (unsigned char)c;
	dst = b;
	while (len--)
		*dst++ = sym;
	return (b);
}
