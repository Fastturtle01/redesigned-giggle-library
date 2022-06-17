/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:14:58 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 12:02:33 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>
#include "libft.h"

// size_t	lenth1(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	dest[] = "123";
// 	char	src[] = "";
// 	size_t a;

// 	a = ft_strlcpy(dest, src, 3);
// 	printf("New %lu\n", a);
// 	printf("Source OG %lu\n", strlcpy(dest, src, 4));
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dest);
// }
