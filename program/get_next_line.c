/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 04:59:34 by atropnik          #+#    #+#             */
/*   Updated: 2019/05/29 05:10:13 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_glst	*list_funx(int fd, t_glst **fds)
{
	t_glst		*curr;

	curr = *fds;
	if (curr == NULL)
	{
		if (!(curr = (t_glst*)malloc(sizeof(t_glst))))
			return (NULL);
		curr->buff = ft_strnew(0);
		curr->fd = fd;
		curr->next = NULL;
		*fds = curr;
		return (curr);
	}
	while (curr->next)
		curr = curr->next;
	if (!(curr->next = (t_glst*)malloc(sizeof(t_glst))))
		return (NULL);
	curr->next->buff = ft_strnew(0);
	curr->next->fd = fd;
	curr->next->next = NULL;
	return (curr->next);
}

t_glst	*which_fd(const int fd, t_glst **fds)
{
	t_glst			*runner;

	runner = *fds;
	if (runner == NULL)
		return (list_funx(fd, fds));
	while (runner->next || runner->fd == fd)
	{
		if (runner->fd == fd)
			return (runner);
		runner = runner->next;
	}
	runner = list_funx(fd, fds);
	return (runner);
}

int		line_return(t_glst *node, int size, char **line)
{
	char			*temp;
	int				fd;
	char			*str;

	fd = node->fd;
	str = node->buff;
	if (str[size] == '\0')
	{
		*line = ft_strdup(str);
		ft_glstelemfree(&node);
		return (0);
	}
	if (str[size] == '\n')
	{
		*line = ft_strsub(str, 0, size);
		temp = ft_strdup(str + size + 1);
		free(str);
		node->buff = temp;
	}
	return (1);
}

int		when_end_line(t_glst **node, char **line)
{
	t_glst			*temp;

	temp = *(node);
	if (*(temp->buff))
	{
		*line = ft_strdup(temp->buff);
		ft_bzero((char *)temp->buff, ft_strlen(temp->buff));
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_glst	*head;
	t_glst			*node;
	int				bytesread;

	if (!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	node = which_fd(fd, &head);
	while ((bytesread = read(fd, buf, BUFF_SIZE)))
	{
		if (bytesread < 0)
			return (-1);
		buf[bytesread] = '\0';
		node->buff = ft_strjoinfree(node->buff, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if ((bytesread < BUFF_SIZE) && !(ft_strchr(node->buff, '\n')))
		return (when_end_line(&node, line));
	bytesread = ft_strchr(node->buff, '\n') - node->buff;
	return (line_return(node, bytesread, line));
}

/*
int		main(int argc, char **argv)
{
	int		fd;
	char	*buf;

	if (argc == 1)
		fd = 0;
	else if (argc > 3)
		;
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (get_next_line(fd, &buf) == 1)
		{
			ft_putendl(buf);
			free(buf);
		}
		close(fd);
	}
	return (argc);
} 
*/
