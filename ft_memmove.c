/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:10:03 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/14 18:10:04 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t	i;
	char	*dest;
	char	*src;

	if (!destination && !source)
		return (0);
	dest = (char *)destination;
	src = (char *)source;
	i = 0;
	if (dest > src)
	{
		while (size-- > 0)
			dest[size] = src[size];
	}
	else
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (destination);
}
