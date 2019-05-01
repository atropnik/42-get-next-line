/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 13:54:44 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 16:31:16 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(result = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	result[i] = '\0';
	while (--i >= 0)
		result[i] = f(s[i]);
	return (result);
}
