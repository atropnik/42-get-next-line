/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:08:08 by atropnik          #+#    #+#             */
/*   Updated: 2019/05/29 03:01:17 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char const *s1, char const *s2)
{
	char		*result;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(result = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		result[++j] = s1[i];
	i = -1;
	while (s2[++i])
		result[++j] = s2[i];
	free((char *)s1);
	return (result);
}
