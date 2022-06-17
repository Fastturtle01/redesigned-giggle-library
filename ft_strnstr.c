/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:49:15 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/17 14:57:42 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	a;

// 	i = 0;
// 	a = len;
// 	if (needle[0] == '\0')
// 		return ((char *)haystack);
// 	if (len == 0)
// 		return ((char *)haystack);
// 	while (haystack[i] && len--)
// 	{
// 		j = 0;
// 		while (haystack[i] && needle[j] && haystack[i] == needle[j])
// 		{
// 			i++;
// 			j++;
// 		}
// 		if (needle[j] == '\0' || (i - j) == a)
// 			return ((char *)&haystack[i - j]);
// 		i = (i - j) + 1;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	int		z;

	a = 0;
	z = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0 || len < ft_strlen((char *)needle))
		return (0);
	if (len > ft_strlen((char *)haystack))
		len = ft_strlen((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		z = ft_strncmp((char *)haystack, (char *)needle, ft_strlen((char *) needle));
		if (z == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *hay = "aaabcabcaacd";
	char *need = "aabc";
	char *hay1 = "aaabcabcaacd";
	char *need1 = "aabc";
	//char *a = strnstr(hay, "2", -1);
	printf("OG : %s\n", strnstr(hay, need, -1));
	printf("OG : %s\n", strnstr(hay, "", -1));
	printf("OG : %s\n", strnstr(hay, "c", -1));
	//char *b = ft_strnstr(hay1, "2", -1);
	printf("New : %s\n", ft_strnstr(hay1, need1, -1));
	printf("New : %s\n", ft_strnstr(hay1, "", -1));
	printf("New : %s\n", ft_strnstr(hay1, "c", -1));
}
