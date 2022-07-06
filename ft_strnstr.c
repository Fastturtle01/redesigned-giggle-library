/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:49:15 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 11:26:42 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		z;
	char	*keep;
	int		a;

	z = 0;
	a = 0;
	keep = (char *)haystack;
	if (needle[0] == '\0')
		return ((char *)haystack);
	else if (len == 0 || len < ft_strlen((char *)needle))
		return (0);
	while (*(haystack + a) && len >= 1)
	{
		z = ft_memcmp((char *)(keep + a), (char *)needle, \
		ft_strlen((char *) needle));
		if (ft_strlen((char *)keep + a) < ft_strlen((char *)needle))
			return (0);
		else if (z == 0)
			return ((char *)haystack + a);
		a++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	 char hay[30] = "aaabcabcd";
// 	 char *c = ft_strnstr(hay, "abcd", 9);
// 	// char *need = "aabc";
// 	// char hay1[30]= "lorem ism dolor sit";
// 	// char need[10] = "abcd";
// 	//char *a = strnstr(hay, "2", -1);
// 	// printf("OG : %s\n", strnstr(hay, "cd", 8));
// 	// printf("OG : %s\n", strnstr(hay, need, -1));
// 	// printf("OG : %s\n", strnstr(hay, "c", -1));
// 	//char *b = ft_strnstr(hay1, "2", -1);
// 	if (*c == *(hay+5))
// 		printf("Same result\n");
// 	printf("New : %s\n", ft_strnstr(hay, "abcd", 9));
// 	printf("OG : %s\n", hay + 5);
// 	// printf("New : %s\n", ft_strnstr(hay1, need1, -1));
// 	// printf("New : %s\n", ft_strnstr(hay1, "c", -1));
// }
