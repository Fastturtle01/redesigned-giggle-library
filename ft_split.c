/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:07:37 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/15 22:41:44 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c, int check)
{
	int	i;
	int	j;
	int	str;

	i = 0;
	j = 0;
	str = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			str++;
			j = 0;
			while (s[i] != c && s[i])
			{
				j++;
				i++;
			}
			if (check == 1)
				return (j);
		}
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		i;
	int		move_str;
	int		j;

	len = count_word(s, c, 0);
	i = 0;
	move_str = 0;
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (move_str < len)
	{
		j = count_word(s, c, 1);
		str[move_str] = ft_calloc(sizeof(char), (j + 1));
		while (*s == c && *s)
			s++;
		i = 0;
		while (j > i)
			str[move_str][i++] = *s++;
		move_str++;
	}
	str[move_str] = NULL;
	return (str);
}
