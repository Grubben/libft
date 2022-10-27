/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:31:00 by amaria-d          #+#    #+#             */
/*   Updated: 2022/10/27 11:12:12 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_line(int fd, char **line)
{
	ssize_t	reret;

	line[fd] = malloc(BUFFER_SIZE + 1);
	reret = read(fd, line[fd], BUFFER_SIZE);
	if (reret <= 0)
	{
		free(line[fd]);
		line[fd] = NULL;
		return (NULL);
	}
	line[fd][reret] = '\0';
	return (line[fd]);
}

static char	*final_prep(int fd, char **line, char *nlpos)
{
	char	*new;
	char	*rest;

	if (nlpos == NULL)
	{
		new = ft_substr(line[fd], 0, ft_strlen(line[fd]));
		free(line[fd]);
		line[fd] = NULL;
	}
	else
	{
		if ((size_t)(nlpos - line[fd]) == ft_strlen(line[fd]) - 1)
		{
			new = ft_substr(line[fd], 0, ft_strlen(line[fd]));
			free(line[fd]);
			line[fd] = NULL;
			return (new);
		}
		new = ft_substr(line[fd], 0, nlpos - line[fd] + 1);
		rest = ft_substr(line[fd], nlpos - line[fd] + 1, ft_strlen(nlpos));
		free(line[fd]);
		line[fd] = rest;
	}
	return (new);
}

static int	get_more(int fd, char **line)
{
	char	*tmp;
	char	*new;
	ssize_t	reret;

	tmp = malloc(BUFFER_SIZE + 1);
	reret = read(fd, tmp, BUFFER_SIZE);
	if (reret <= -1)
	{
		free(tmp);
		return (-1);
	}
	if (reret == 0)
	{
		free(tmp);
		return (0);
	}
	tmp[reret] = '\0';
	new = ft_strjoin(line[fd], tmp);
	free(line[fd]);
	free(tmp);
	line[fd] = new;
	return (1);
}

static char	*debris_line(int fd, char **line)
{
	char	*nlpos;
	char	*new;
	ssize_t	tmp;

	nlpos = ft_strchr(line[fd], '\n');
	if (nlpos == NULL)
	{
		tmp = get_more(fd, line);
		if (tmp == -1)
			return (NULL);
		if (tmp == 0)
		{
			new = final_prep(fd, line, NULL);
			return (new);
		}
		if (tmp == 1)
			return (debris_line(fd, line));
	}
	new = final_prep(fd, line, nlpos);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*line[MAX_FD];
	char		*new;

	if (read(fd, 0, 0) || BUFFER_SIZE < 1)
		return (NULL);
	if (line[fd] == NULL)
	{
		if (new_line(fd, line) == NULL)
			return (NULL);
	}
	new = debris_line(fd, line);
	return (new);
}
