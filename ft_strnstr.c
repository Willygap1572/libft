/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:31:20 by gde-andr          #+#    #+#             */
/*   Updated: 2022/11/15 19:39:41 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static size_t	ft_strnlen(const char *str, size_t maxlen)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] && i < maxlen)
// 		i++;
// 	return (i);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while ((size_t)i < len && haystack[i])
	{
		j = 0;
		while ((size_t)(i + j) < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
