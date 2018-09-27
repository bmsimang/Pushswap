/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:00:35 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 16:00:37 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;

	if (s)
	{
		end = ft_strlen(s) - 1;
		start = 0;
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		{
			start++;
			if (start == end)
				return (ft_strdup(""));
		}
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		return (ft_strsub(s, start, end - start + 1));
	}
	return (NULL);
}
