/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:38:11 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 01:49:14 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
	return (result);
}
