/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:49:15 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 12:24:22 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&(haystack[i]));
		i++;
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
