/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 00:33:57 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 22:47:44 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	const char	*z;
	const char	*lastsrc;
	char		*lastdst;

	a = dst;
	z = src;
	if (!dst && !src)
		return (NULL);
	if (a < z)
	{
		while (len--)
			*a++ = *z++;
	}
	else
	{
		lastdst = a + (len - 1);
		lastsrc = z + (len - 1);
		while (len--)
			*lastdst-- = *lastsrc--;
	}
	return (dst);
}
