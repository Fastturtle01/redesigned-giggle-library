/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 08:43:53 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/03 04:51:47 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	register PTR ptr;
	if (nmemb == 0 || size == 0)
	nmemb = size = 1;

	ptr = malloc (nmemb * size);
	if (ptr) bzero (ptr, nmemb * size);
	return ptr;
}
