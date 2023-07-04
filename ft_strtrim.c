/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:09:18 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/19 01:09:19 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	new_long;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	new_long = end - start;
	result = malloc(sizeof(char) * (new_long + 1));
	if (!result)
		return (NULL);
	while (i < new_long)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
