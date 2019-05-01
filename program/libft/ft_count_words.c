/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 03:38:30 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/26 03:16:53 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		num_word;
	int		i;

	i = 0;
	num_word = 0;
	if (!s || !c)
		return (num_word);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		num_word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	if (s[i - 1] == c)
		num_word -= 1;
	return (num_word);
}
