/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 04:10:43 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/15 04:12:11 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_display_file(char *file_name)
{
	int		filedes;
	int		ret;
	char	buf[BUF_SIZE + 1];

	filedes = open(file_name, O_RDONLY);
	while ((ret = read(filedes, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}
