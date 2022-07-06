/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:41:12 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 13:53:11 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	trimstart(char *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] == set[j])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		i++;
	}
	return (i);
}

size_t	trimend(char *s1, char const *set)
{
	size_t	len;
	int		i;
	int		j;

	len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (s1[len] == set[j])
	{
		j = 0;
		while (s1[len] != set[j] && set[j])
			j++;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ss;
	size_t	start;
	size_t	end;
	char	*book;

	ss = (char *)s1;
	start = trimstart(ss, set);
	ss = ss + start;
	end = trimend(ss, set);
	ss[end] = '\0';
	book = (char *)malloc(sizeof(char) * ft_strlen(ss) + 1);
	book = ss;
	return (book);
}
