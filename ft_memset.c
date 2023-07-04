/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:42:08 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/14 18:53:57 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t count)
{
	size_t	i;
	char	*str;

	str = (char *)ptr;
	i = 0;
	while (i < count)
	{
		str[i] = (char)c;
		i++;
	}
	return (ptr);
}
