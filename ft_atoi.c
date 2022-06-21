/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:43:58 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/21 08:58:54 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spacescheck(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	a;

	i = 0;
	a = 0;
	negative = 1;
	i = spacescheck(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		a++;
		if (a > 1)
			return (0);
		i++;
	}
	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
		a = a * 10 + str[i++] - '0';
	return (a * negative);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int	a = atoi("+-54");
// 	int	b = atoi("+48");
// 	int	c = atoi("++54");
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", c);
// }
