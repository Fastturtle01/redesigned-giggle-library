/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:53:26 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/22 11:42:24 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	const char*		a;
	const char*		b;

	i = 0;
	a = (const char *)s1;
	b = (const char *)s2;
	if (n == 0)
		return (0);
	while (n-- != 0 && (n < sizeof(a) || n < sizeof(b)))
	{
		if (a[i] != b[i])
			return ((unsigned char)a[i] - (unsigned char)b[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = {0, 0, 127, 0};
// 	char	s2[] = {0, 0, 42, 0};

// 	printf("5th must not be 0 : %d\n", ft_memcmp(s1, s2, 4));
// 	printf("3rd index = %d\n", s1[2]);
// }
