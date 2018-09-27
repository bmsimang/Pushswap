/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:46:53 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:46:56 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		i++;
		ptr++;
	}
	return (NULL);
}
