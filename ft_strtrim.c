/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:41:12 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 17:20:11 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_trim(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*book;

	if (!s1)
		return (0);
	start = 0;
	while (is_trim(s1[start], set) && s1[start] != '\0')
		start++;
	end = ft_strlen(s1);
	while (is_trim(s1[end - 1], set) && end > start)
		end--;
	book = (char *)malloc(sizeof(char) * end - start + 1);
	if (!(book))
		return (0);
	i = 0;
	while (start < end)
	{
		book[i] = s1[start++];
		i++;
	}
	book[i] = '\0';
	return (book);
}
