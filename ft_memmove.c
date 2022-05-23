/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:37 by mliew             #+#    #+#             */
/*   Updated: 2022/05/23 17:35:41 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (dst > src)
			ft_memcpy(((char *)dst), ((char *)src), len);
	return (dst);
}

int main()
{
	char dest[] = "Hello World";
	char sour[] = "abcde fghij kl";
	int i = 0;

	printf("Before: %s\n", dest);
	ft_memmove(dest, sour, 5);
	printf("After : %s\n", dest);
}