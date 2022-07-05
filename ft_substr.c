/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:39:44 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/04 23:36:50 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if(!(a = (char *)malloc (sizeof(char) * len + 1)))
		return	(NULL);
	while (s[start] && i < len)
	{
		a[i] = s[start];
		start++;
		i++;
	}
	a[i] = '\0';
	return (a);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*a = "0123456789";
// 	char	*b = ft_substr(a, 0, 4);
// 	printf("result = %s\n", b);
// }
