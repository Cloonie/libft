/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:11:03 by mliew             #+#    #+#             */
/*   Updated: 2022/05/23 11:11:03 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (8);
	else if (c >= 'a' && c <= 'z')
		return (8);
	else if (c >= '0' && c <= '9')
		return (8);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	int test;

	test = 'A';
	printf("%d\n", ft_isalnum(test));
	printf("%d\n", isalnum(test));
}
*/