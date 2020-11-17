/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:29:03 by dmyesha           #+#    #+#             */
/*   Updated: 2020/11/14 15:33:39 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *entry;

	if (!lst)
		return (NULL);
	entry = lst;
	if (!(newlst = ft_lstnew(f(entry->content))))
		return (NULL);
	lst = newlst;
	entry = entry->next;
	while (entry)
	{
		lst->next = ft_lstnew(f(entry->content));
		if (lst->next == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		else
		{
			entry = entry->next;
			lst = lst->next;
		}
	}
	return (newlst);
}
