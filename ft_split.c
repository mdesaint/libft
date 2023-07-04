/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:27:58 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/19 00:28:01 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		dest[i++] = str[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	size_t	i;
	size_t	j;
	char	**result;

	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	index = -1;
	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}
