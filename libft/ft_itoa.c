/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:45:54 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:45:58 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			num_len;
	unsigned int	n1;

	num_len = ft_num_len(n);
	n1 = n;
	if (n < 0)
	{
		n1 = -n;
		num_len++;
	}
	if (!(str = ft_strnew(num_len)))
		return (NULL);
	str[--num_len] = n1 % 10 + '0';
	while (n1 /= 10)
		str[--num_len] = n1 % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
