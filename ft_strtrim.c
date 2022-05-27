/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:03:01 by mliew             #+#    #+#             */
/*   Updated: 2022/05/27 11:51:21 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getstart(char const *s1, char const *set)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(s1, set))
	}
}

int	getend(char const *s1, char const *set)
{

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *array

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	array = malloc(sizeof (char) * 
	while (s1)
	{
		if (s1 == set)
	}
}