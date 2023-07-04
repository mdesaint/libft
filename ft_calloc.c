/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 02:24:36 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/17 02:24:41 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;

	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < count * size)
		((char *)ret)[i++] = '\0';
	return (ret);
}
