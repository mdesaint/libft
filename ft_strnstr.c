/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:17:43 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/15 14:17:46 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*a;

	i = 0;
	a = (char *)str;
	n_len = 0;
	while (ndl[n_len])
		n_len++;
	if (n_len == 0 || str == ndl)
		return (a);
	while (a[i] != '\0' && i < len)
	{
		j = 0;
		while (a[i + j] != '\0' && ndl[j] != '\0' && a[i + j] == ndl[j] && i
			+ j < len)
			j++;
		if (j == n_len)
			return (a + i);
		i++;
	}
	return (0);
}
