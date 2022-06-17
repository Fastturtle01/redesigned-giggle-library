/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 00:33:57 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 10:18:09 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	const char	*z;

	a = dst;
	z = src;
	if (!dst && !src)
		return (dst);
	while (len--)
		*a++ = *z++;
	return (dst);
}
