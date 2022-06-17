/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:52:16 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 10:11:22 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	char		*a;
	const char	*z;
	size_t		i;

	a = dst;
	z = src;
	i = 1;
	if (!dst && !src)
		return (dst);
	while (i <= n)
	{
		*a++ = *z++;
		i++;
	}
	return (dst);
}
