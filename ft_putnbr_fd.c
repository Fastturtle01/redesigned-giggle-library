/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:16:37 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/07/05 22:27:05 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		digits;
	long	ladygaga;

	ladygaga = (long)n;
	if (ladygaga < 0)
	{
		write(fd, "-", 1);
		ladygaga *= -1;
	}
	digits = (ladygaga % 10) + 48;
	if (ladygaga > 9)
		ft_putnbr_fd(ladygaga / 10, fd);
	write(fd, &digits, 1);
}
