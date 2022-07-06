/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:52:08 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/06 23:04:45 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(int n)
{
	size_t	len;

	len = 0;
	if (n < 0 || n == 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*a;
	long	num;
	size_t	len;

	num = (long)n;
	len = count(n);
	a = (char *)malloc(sizeof(char) * len + 1);
	if (! (a))
		return (0);
	a[len] = '\0';
	if (num == 0)
		a[0] = '0';
	if (num < 0)
	{
		a[0] = '-';
		num *= -1;
	}
	while (num)
	{
		a[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (a);
}
