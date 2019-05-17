/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 04:59:34 by atropnik          #+#    #+#             */
/*   Updated: 2019/05/16 20:35:25 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_glst	*start_list(int fd)
{
	t_glst			*new_list;

	if (!(new_list = (t_glst*)malloc(sizeof(t_glst))))
			return (NULL);
	new_list->buff = NULL;
	new_list->fd = fd;
	return (new_list);
}

t_glst	*current_line(const int fd, t_glst **fds)
{
	t_glst			*temp_list;

	temp_list = *fds;
	while (temp_list)
	{
		if (temp_list->fd == fd)
			return (temp_list);
		temp_list = temp_list->next;
	}
	temp_list = start_list(fd);
	temp_list->next = *fds;
	*fds = temp_list;
	return (temp_list);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	t_glst			*current;
	static	t_glst	*fds;
	int				bytesread;

	if (!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	current = current_line(fd, &fds);
	while ((bytesread = read(fd, buf, BUFF_SIZE)))
	{
		buf[bytesread] = '\0';
		current->buff = ft_strjoin(current->buff, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (bytesread < BUFF_SIZE && !ft_strlen(current->buff))
		return (0);
	ft_strncpy(*line, current->buff, current->buff - ft_strchr(current->buff, '\n'));
	return (1);
}


int		main(int argc, char **argv)
{
	int		fd;
	char	*buf;

	if (argc == 1)
		fd = 0;
	else if (argc > 3)
		return (0);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &buf) == 1)
		{
			int i;
			i = 0;
			while (buf[i])
				write(1, &buf[i++], 1);
			write (1, "\n", 1);
			free(buf);
		}
		fd = open(argv[2], O_RDONLY);
		while (get_next_line(fd, &buf) == 1)
		{
			ft_putendl(buf);
			free(buf);
		}
	}
} 
