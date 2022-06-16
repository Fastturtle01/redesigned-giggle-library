/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 22:30:46 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/16 23:09:44 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	int				x;

	x = ft_strlen((char *)s);
	a = (unsigned char)c;
	while (x >= 0)
	{
		if (s[x] == a)
			return ((char *) &s[x]);
		x--;
	}
	return (0);
}
