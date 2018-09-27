/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmsimang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:01:31 by bmsimang          #+#    #+#             */
/*   Updated: 2018/09/04 16:01:34 by bmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				gnl(char **ts, char **s2, int fd)
{
	char		buff[BUFF_SIZE + 1];
	char		*s3;
	int			bytes;

	while ((*s2 = ft_strchr(*ts, '\n')) == NULL)
	{
		bytes = read(fd, buff, BUFF_SIZE);
		buff[bytes] = '\0';
		if (bytes == 0)
		{
			if (ft_strlen(*ts) == 0)
				return (0);
			*ts = ft_strjoin(*ts, "\n");
		}
		else if (bytes < 0)
			return (-1);
		s3 = ft_strjoin(*ts, buff);
		free(*ts);
		*ts = s3;
		if (!*ts)
			return (-1);
		*s2 = ft_strchr(*ts, '\n');
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*s = NULL;
	char			*ts;
	char			*s2;
	int				c;

	if (!(ts = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)) || (!line))
		return (-1);
	if (s)
		ts = ft_strjoin("", s);
	c = gnl(&ts, &s2, fd);
	if (c == 0)
		return (0);
	else if (c == -1)
		return (-1);
	s = ft_strdup(s2 + 1);
	*line = ft_strsub(ts, 0, ft_strlen(ts) - ft_strlen(s2));
	free(ts);
	return (1);
}
