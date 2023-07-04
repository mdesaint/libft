/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:24:04 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/19 18:24:05 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*n;

	if (!lst || !*lst || !del)
		return ;
	list = *lst;
	while (list != NULL)
	{
		n = list->next;
		del(list->content);
		free(list);
		list = n;
	}
	*lst = NULL;
}
