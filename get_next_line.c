/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:51:08 by atropnik          #+#    #+#             */
/*   Updated: 2019/04/04 21:51:13 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
