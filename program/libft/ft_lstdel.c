/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:15:09 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/20 22:16:34 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*next_list;

	if (!alst || !*alst)
		return ;
	if (del)
	{
		while (*alst)
		{
			next_list = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = next_list;
		}
		*alst = NULL;
	}
}
