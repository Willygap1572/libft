/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:31:20 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/19 12:06:46 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (str[i] && i < maxlen)
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	if (len == 0)
		return (NULL);
	needle_len = ft_strnlen(needle, len);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= (int)(len - needle_len))
	{
		if ((haystack[0] == needle[0])
			&& (0 == ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
