/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 01:53:06 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 05:55:18 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*new_str;

	i = 0;
	while (s1[i] != '\0')
		++i;
	if (!(new_str = malloc(sizeof(char) * i + 1)))
		return (NULL);
	new_str[i] = '\0';
	while (--i >= 0)
		new_str[i] = s1[i];
	return (new_str);
}
