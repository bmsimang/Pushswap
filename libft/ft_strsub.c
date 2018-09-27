/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:00:14 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 16:00:16 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	char	*ptr;

	ptr = (char*)s;
	i = 0;
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s != '\0')
	{
		sub[i++] = ptr[start++];
	}
	sub[i] = '\0';
	return (sub);
}
