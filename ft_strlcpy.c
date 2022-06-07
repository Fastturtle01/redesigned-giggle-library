/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:14:58 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/07 16:13:33 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

// size_t	ft_strlen_1(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	a;

	a = ft_strlen(src);
	i = 0;
	if (size == 0 || size < a)
		return (0);
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	dest[3];
	char	src[] = "ABcaddadE";

	printf("Source Before %s\n", src);
	ft_strlcpy(dest, src, 3);
	printf("Source After %s\n", src);
	printf("Dest After %s\n", src);
	printf("Source OG %lu\n", strlcpy(dest, src, 3));
}*/
