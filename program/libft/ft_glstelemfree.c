/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstelemfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:26:06 by atropnik          #+#    #+#             */
/*   Updated: 2019/05/23 23:22:42 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_glstelemfree(t_glst **node)
{
	t_glst			*temp;

	if (!node || !*node)
		return ;
	if (*node)
	{
		temp = (*node)->next;
		free((*node)->buff);
		*node = temp;
	}
}
