/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:24:06 by mliew             #+#    #+#             */
/*   Updated: 2022/05/25 14:24:06 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strnstr() function locates the first occurrence of the null-terminated string
// needle in the string haystack, where not more than len characters are searched.

// Characters that appear after a `\0' character are not searched.  Since the 
// strnstr() function is a FreeBSD specific API, it should only be used when 
// portability is not a concern.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	
}