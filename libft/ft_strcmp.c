/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:52:51 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 15:52:52 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned char	*sa;
	unsigned char	*sb;

	sa = (unsigned char*)s1;
	sb = (unsigned char*)s2;
	i = 0;
	while (sa[i])
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
		i++;
	}
	if (sa[i] != sb[i])
		return (sa[i] - sb[i]);
	return (0);
}
