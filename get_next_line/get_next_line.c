/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:51:17 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/16 19:07:10 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*stash;
	char	*buffer;
	ssize_t	bytes_read;
	size_t	i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	i = 0;
	while (bytes_read > 0)
	{
		while (bytes_read > i)
		{
			if (buffer[i] == '\n')
			{
				*stash = set_line(buffer);
				return (stash);
			}
		}
	}
	*stash = set_line(buffer);
	return (stash);
}

char	*fill_buffer(int fd, char *leftover, char *buffer)
{
	while (*buffer != '\0' && *buffer != '\n')
	{
		read(fd, buffer, BUFFER_SIZE);
		if (*leftover == NULL)
		{
			ft_strjoin(buffer, leftover);
		}
		else
		{
			while (*buffer != '\0')
				*leftover++ = *buffer++;
		}
		buffer++;
	}
	return (leftover);
}

char	*set_line(char *buffer)
{
	char	*leftover;

	leftover = ;
	while (*buffer == '\n' || *buffer == '\0')
	{
		while (*buffer != )
	}
	return (leftover);
}
