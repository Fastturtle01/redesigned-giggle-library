/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeelarp <tmeelarp@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:28:04 by tmeelarp          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/02 07:36:07 by tmeelarp         ###   ########.fr       */
=======
/*   Updated: 2022/07/04 22:04:24 by tmeelarp         ###   ########.fr       */
>>>>>>> daa104537526749bbc0d22b1822d4342fea4cd90
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strdup(char *src);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
<<<<<<< HEAD
void	*ft_calloc(size_t nmemb, size_t size);
=======
char *ft_substr(char const *s, unsigned int start, size_t len);

>>>>>>> daa104537526749bbc0d22b1822d4342fea4cd90
#endif

//gcc -Wall -Werror -Wextra -o strn ft_strnstr.c -L . -lft && ./strn
//calloc strnstr
