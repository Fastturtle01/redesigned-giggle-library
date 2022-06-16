/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:28:04 by tmeelarp          #+#    #+#             */
/*   Updated: 2022/06/16 21:48:25 by tmeelarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strdup(char *src);
void	*ft_memset(void *b, int c, size_t len);

#endif
