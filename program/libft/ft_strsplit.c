/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 01:50:31 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/25 23:18:08 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;
	int		num_w;

	num_w = ft_count_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * num_w + 1)) || !s || !c)
		return (NULL);
	i = 0;
	j = 0;
	while (s && (i < num_w))
	{
		while (s[j] == c)
			j++;
		len = 0;
		j--;
		while (s[++j] != c && s[j] != '\0')
			len++;
		result[i] = ft_make_token(j, len, s);
		i++;
	}
	result[i] = NULL;
	return (result);
}
