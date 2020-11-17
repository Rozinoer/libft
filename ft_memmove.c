/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:53:58 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:56:42 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *wdst;
	unsigned char *wsrc;

	if (src == 0 && dst == 0)
		return (dst);
	wdst = (unsigned char *)dst;
	wsrc = (unsigned char *)src;
	if (wdst <= wsrc || wdst >= wsrc + len)
		while (len--)
			*wdst++ = *wsrc++;
	else
	{
		wdst = wdst + (len - 1);
		wsrc = wsrc + (len - 1);
		while (len--)
			*wdst-- = *wsrc--;
	}
	return (dst);
}
