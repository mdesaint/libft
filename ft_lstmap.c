/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:24:24 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/19 18:24:25 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	result = ft_lstnew(f(lst->content));
	if (!result)
		return (0);
	temp = result;
	lst = lst->next;
	while (lst)
	{
		result->next = ft_lstnew(f(lst->content));
		if (!result->next)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		result = result->next;
		lst = lst->next;
	}
	result->next = NULL;
	return (temp);
}
