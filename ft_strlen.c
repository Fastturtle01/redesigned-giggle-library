/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:43:15 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 14:11:01 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (! (s))
		return (0);
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	int	a = ft_strlen("");
// 	printf("%d\n", a);
// }
