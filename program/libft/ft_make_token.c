/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_token.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 03:35:52 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/15 04:19:52 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_make_token(int j, int len, char const *s)
{
	char	*str;
	int		k;

	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	j = j - len;
	len = len + j;
	k = 0;
	while (j < len)
		str[k++] = s[j++];
	str[k] = '\0';
	return (str);
}
