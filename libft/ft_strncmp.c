/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:56:36 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:56:38 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sa;
	unsigned char	*sb;

	sa = (unsigned char*)s1;
	sb = (unsigned char*)s2;
	i = 0;
	while (n && sa[i] && (sa[i] == sb[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (sa[i] - sb[i]);
}
