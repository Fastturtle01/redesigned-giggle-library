/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:16:38 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 12:11:07 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = ft_strlen(dst);
	if (size == 0)
		return (a);
	while (*src != '\0')
	{
		*dst += a;
		*dst = *src++;
		dst++;
	}
	if (size == 0 || ft_strlen(dst) > size)
		dst[a] = '\0';
	return (a + ft_strlen(src));
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
