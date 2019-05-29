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
	char	*result;
	int		i;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s2);
	len = ft_strlen(s1) + i;
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	result[len + 1] = '\0';
	while (i >= 0)
	{
		result[len] = s2[i];
		i--;
		len--;
	}
	while (len >= 0)
	{
		result[len] = s1[len];
		len--;
	}
	free((char *)s1);
	return (result);
}
