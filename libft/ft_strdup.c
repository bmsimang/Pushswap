/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:53:32 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:53:37 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s)
{
	int		l;
	char	*str;

	l = 0;
	while (s[l])
		l++;
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	l = 0;
	while (s[l])
	{
		str[l] = s[l];
		l++;
	}
	str[l] = '\0';
	return (str);
}
