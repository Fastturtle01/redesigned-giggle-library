/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:13:38 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/07 15:23:00 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Taylor Swift";
	char	s2[] = "Taylor Swift";
	char	s3[] = "Taylor Swift";
	char	s4[] = "Taylor \200Wift";
	char	s5[] = "Taylor \200wift";
	char	s6[] = "Taylor Swift";

	printf("ft_tee1: %d\n", ft_strncmp(s1, s2, 1));
	printf("ft_tee2: %d\n", ft_strncmp(s3, s4, 7));
	printf("ft_tee3: %d\n", ft_strncmp(s5, s6, 8));
	printf("original1: %d\n", strncmp(s1, s2, 1));
	printf("original2: %d\n", strncmp(s3, s4, 7));
	printf("original3: %d\n", strncmp(s5, s6, 8));
}*/
