/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 01:32:02 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/17 01:32:04 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	
	result = malloc(sizeof(char) * len + 1);
	if(!result)
	{
		return(NULL);
	}
	while(s[i])
	{
		while(i < len)
		{
			result[i] =  s[start + i];
			i++;
		}
		i++;
	}
	result[i] = '\0';
	return(i);
}
/*
int	main(int argc, char **argv)
{
	char mess[] = "lemessage";
	ft_substr(mess, 2, 8);
	return(0);
}
*/







































/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
