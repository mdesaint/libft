/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:52:43 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/14 18:52:45 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	i;
	char	*dest;
	char	*src;

	if (!destination && !source)
		return (0);
	dest = (char *)destination;
	src = (char *)source;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
