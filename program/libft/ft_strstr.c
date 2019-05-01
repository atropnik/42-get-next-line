/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 03:46:49 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 23:32:59 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i1;
	int	i2;
	int	j1;
	int	j2;

	if (*s2 == '\0')
		return ((char *)s1);
	i1 = 0;
	j1 = 0;
	while (*(s1 + i1))
	{
		i2 = i1;
		j2 = j1;
		while (*(s2 + j2) && *(s1 + i2) == *(s2 + j2))
		{
			i2++;
			j2++;
		}
		if (*(s2 + j2) == '\0')
			return ((char *)(s1 + i1));
		i1++;
	}
	return (NULL);
}
