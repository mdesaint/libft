/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:32:06 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/14 18:32:11 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int s)
{
	int		i;
	char	*src;

	src = (char *) string;
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (string[i] == (char)s)
			return ((char *) string + i);
		i--;
	}
	if (string[i] == (char)s)
		return ((char *) string + i);
	return (0);
}
