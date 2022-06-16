/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:52:16 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 00:33:17 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	char		*a;
	const char	*z;

	a = dst;
	z = src;
	if (!dst && !src)
		return (dst);
	while (n)
	{
		*a++ = *z++;
		n--;
	}
	return (dst);
}
