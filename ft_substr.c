/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:39:44 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 14:39:35 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (! (s))
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
	{
		a = (char *)malloc (sizeof(char) * 1);
		a[0] = '\0';
		return (a);
	}
	a = (char *)malloc (sizeof(char) * len + 1);
	if (! (a))
		return (NULL);
	while (s[start] != '\0' && i < len)
		a[i++] = s[start++];
	a[len] = '\0';
	return (a);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*a = "0123456789";
// 	char	*b = substr(a, 100, 1);
// 	printf("result = %s\n", b);
// }
