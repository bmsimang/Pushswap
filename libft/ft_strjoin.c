/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:54:37 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:54:39 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	a = 0;
	b = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	while (s1[a])
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		str[a++] = s2[b++];
	}
	str[a] = '\0';
	return (str);
}
