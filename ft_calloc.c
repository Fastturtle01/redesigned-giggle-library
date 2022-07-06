/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 08:43:53 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 13:57:53 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	a = malloc(nmemb * size);
	if (! (a))
		return (0);
	ft_bzero(a, nmemb * size);
	return (a);
}
