/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:16:38 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/29 06:04:30 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d = dst;
	const char *s = src;
	size_t n = size;
	size_t dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *dst = "123";
// 	char	*src = "abc";
// 	char *dst1 = "123";
// 	char	*src1 = "abc";
// 	printf("original : %zu\n", strlcat (dst1, src1, 1));
// 	size_t	a = ft_strlcat(dst, src, 1);
// 	printf("Output is : %zu\n", a);
// }
