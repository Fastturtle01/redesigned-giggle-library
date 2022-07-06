/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 02:57:50 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 23:06:48 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*a;

	b = (unsigned char)c;
	a = (unsigned char *)s;
	while (n--)
	{
		if (*a == b)
			return (a);
		a++;
	}
	return (NULL);
}
