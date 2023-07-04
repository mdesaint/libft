/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:25:32 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/15 16:25:36 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;
	size_t	strlen;

	strlen = 0;
	while (src[strlen])
		strlen++;
	dest = (char *)malloc(sizeof(*dest) * (strlen + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
