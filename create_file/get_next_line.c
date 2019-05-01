/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:51:08 by atropnik          #+#    #+#             */
/*   Updated: 2019/04/08 23:12:11 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		readlinewidth(int fd)
{
	char	buff[2];
	size_t	nbread;

	(void) memset((void*) buff, 0, (size_t) 2);
	nbread = read(fd, (void *) buff, (size_t) 2);
	if (nbread == -1 || nbread == 0)
		return (-1);
	buff[1] 
}


int	fd;
int	open(char *name, int flags, int perms);

fd = open (name, flags, perms);

// flags are:

// O_RDONLY
// O_WRONGLY
// O_RDWR

int		main(int argc, char **argv)
{
	char	buf;
	int		i;
	int		fd;

	i = 1;
	if (argc < 2 || argv[1][0] == '-')
		cat_everything();
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
		else
		{
			perror("ft_cat: ");
			perror(argv[i]);
			perror(": No such file or directory\n");
			return (1);
		}
		close(fd);
		i++;
	}
	return (0);
}
