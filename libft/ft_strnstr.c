/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:58:04 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:58:06 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			c_eq;

	i = 0;
	c_eq = 1;
	if (!ft_strlen(little))
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			k = i;
			c_eq = 1;
			while (big[k] && little[j] && j < len && k < len)
				if (big[k++] != little[j++])
					c_eq = 0;
			if (c_eq && !little[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
