/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:09:29 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/07 14:25:36 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc (sizeof(char) * str_len(src) + 1);
	if (!(str))
		return (NULL);
	while (*src)
		str[i++] = *src++;
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char *keep;

	keep = "Hi";
	printf("Mine1 : %s\n", keep);
	keep = ft_strdup("Hello");
	printf("Mine : %s\n", keep);
	free(keep);
}*/
