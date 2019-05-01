/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atropnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 02:24:58 by atropnik          #+#    #+#             */
/*   Updated: 2019/03/21 22:20:56 by atropnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		len = ft_num_chars(n);
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[len] = '\0';
	while (n != 0 && len >= 0)
	{
		result[len-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
