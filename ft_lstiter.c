/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:24:18 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/19 18:24:19 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;
	t_list	*n;

	if (!lst || !f)
		return ;
	list = lst;
	while (list != NULL)
	{
		n = list->next;
		f(list->content);
		list = n;
	}
}
