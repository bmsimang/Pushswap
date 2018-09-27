/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:59:24 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:59:31 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		k;
	int		term;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	term = 0;
	while (big[i] && !term)
	{
		if (big[i] == little[0])
		{
			j = 0;
			k = i;
			term = 1;
			while (little[j])
				if (little[j++] != big[k++])
					term = 0;
			if (term)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
