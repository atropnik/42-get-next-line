/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:33:11 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/22 05:27:35 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*psrc;
	char	*pdst;
	size_t	i;

	i = -1;
	psrc = (char *)src;
	pdst = (char *)dst;
	if (psrc < pdst)
	{
		while ((int)(--len) >= 0)
			*(pdst + len) = *(psrc + len);
	}
	else
	{
		while (++i < len)
			*(pdst + i) = *(psrc + i);
	}
	return (dst);
}
