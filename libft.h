/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:10:43 by mliew             #+#    #+#             */
/*   Updated: 2022/05/24 15:17:45 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

# include <string.h>
# include <strings.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
