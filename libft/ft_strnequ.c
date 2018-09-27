/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:57:21 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:57:22 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	while (i < n && s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
		i++;
	}
	return (0);
}
