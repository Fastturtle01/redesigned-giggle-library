/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:41:12 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 18:02:23 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	size_t		end;
	char 		*a;
	char 		*b;
	int			i;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	b = (char *)s1;
	while (s1[start])
	{
		if (b[start] == set[i])
			b[start] = b[start + 1];
		else
			start++;
		i++;
	}
	// while ()
	// {
	// 	if (b[end] == set[i])
	// 		b[end] = b[end - 1];
	// 	else
	// 		end--;
	// }
	a = (char *)malloc(sizeof(char) * ft_strlen(b) + 1);
	if (!(a))
		return (NULL);
	a = b;
	return (a);
}
