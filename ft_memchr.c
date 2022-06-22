/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 02:57:50 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/22 03:48:08 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char b;
	const char *a;
	size_t	i;


	i = 0;
	b = (unsigned char)c;
	a = (const char *)s;
	if (n == 0)
		return (NULL);
	i = sizeof(a);
	if (n > i)
		n = i;
	while (n > 0)
	{
		if (*a == b)
		{
			return((char*)a);
		}
		a++;
		n--;
	}
	return (NULL);
}
