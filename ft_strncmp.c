/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:27:34 by mliew             #+#    #+#             */
/*   Updated: 2022/05/25 14:27:34 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strcmp() and strncmp() functions lexicographically 
// compare the null-terminated strings s1 and s2.

// The strncmp() function compares not more than n characters.  
// Because strncmp() is designed for comparing strings rather than binary data, 
// characters that appear after a `\0' character are not compared.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}