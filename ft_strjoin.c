/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:58:16 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 15:40:32 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*a;

	i = -1;
	a = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(a))
		return (NULL);
	while (s1[++i])
			a[i] = s1[i];
	while (*s2 != '\0')
	{
		a[i] = *s2;
		s2++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
