/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:59:03 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:59:05 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		cnt(char *s, char c)
{
	int str_num;
	int i;

	str_num = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i])
		{
			while (s[i] != c && s[i])
				i++;
			while (s[i] == c && s[i])
				i++;
			str_num++;
		}
	}
	return (str_num);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ar;
	int		si;
	int		strt;
	int		end;

	si = 0;
	strt = 0;
	if ((!s) || (!(ar = (char**)malloc(sizeof(*ar) * cnt((char *)s, c) + 1))))
		return (NULL);
	while (s[strt])
	{
		if (s[strt] != c)
		{
			end = 0;
			while (s[strt + end] != c && s[strt + end] != '\0')
				end++;
			ar[si] = ft_strsub(s, strt, end);
			strt = end + strt;
			si++;
		}
		else
			strt++;
	}
	ar[si] = NULL;
	return (ar);
}
