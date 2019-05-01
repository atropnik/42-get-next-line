/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 02:50:43 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/21 22:14:10 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	int		z;
	char	oct;

	z = 128;
	oct = octet;
	while (z > 0)
	{
		if (oct & z)
			ft_putchar('1');
		else
			ft_putchar('0');
		z = z >> 1;
	}
}
