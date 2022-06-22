/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:49:15 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/22 04:34:54 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		z;
	size_t	a;

	z = 0;
	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (len == 0 || len < ft_strlen((char *)needle))
		return (0);
	if (len > ft_strlen((char *)haystack))
		len = ft_strlen((char *)haystack);
	*(char *)(haystack + len + 1) = '\0';
	while (*haystack != '\0' && len != 0)
	{
		z = ft_strncmp((char *)haystack, (char *)needle, \
		ft_strlen((char *) needle));
		if (ft_strlen((char *)haystack) < ft_strlen((char *)needle))
			return (0);
		if (z == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// char *hay = "aaabcabcaacd";
// 	// char *need = "aabc";
// 	char hay1[30]= "lorem ipsum dolor sit";
// 	// char need[10] = "aabc";
// 	//char *a = strnstr(hay, "2", -1);
// 	// printf("OG : %s\n", strnstr(hay, "cd", 8));
// 	// printf("OG : %s\n", strnstr(hay, need, -1));
// 	// printf("OG : %s\n", strnstr(hay, "c", -1));
// 	//char *b = ft_strnstr(hay1, "2", -1);
// 	printf("New : %s\n", ft_strnstr(hay1, "dolor", 15));
// 	// printf("New : %s\n", ft_strnstr(hay1, need1, -1));
// 	// printf("New : %s\n", ft_strnstr(hay1, "c", -1));
// }
