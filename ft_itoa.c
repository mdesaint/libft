/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:24:58 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/18 21:24:59 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	neg_or_not(int nbr)
{
	int	neg;

	if (nbr < 0)
		neg = 1;
	else
		neg = 0;
	return (neg);
}

char	*ft_itoa(int n)
{
	int				neg;
	unsigned int	nbr;
	int				len;
	char			*result;

	len = ft_len(n);
	neg = neg_or_not(n);
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result[len--] = '\0';
	while (len >= 0)
	{
		result[len--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (neg == 1)
		result[0] = '-';
	return (result);
}
