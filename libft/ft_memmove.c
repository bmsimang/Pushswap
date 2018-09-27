/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:48:10 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:48:12 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	if (p_src < p_dest)
	{
		p_dest = p_dest + n - 1;
		p_src = p_src + n - 1;
		while (n > 0)
		{
			*p_dest-- = *p_src--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*p_dest++ = *p_src++;
			n--;
		}
	}
	return (dest);
}
