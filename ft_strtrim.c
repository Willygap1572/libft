/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:36:28 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:36:28 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static short	contains(const char *s, char c)
{
	char	*q;

	q = (char *)s;
	while (*q)
	{
		if (*q == c)
			return (1);
		q++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*q;
	char	*end;

	q = (char *)s1;
	end = (char *) s1 + ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
	{
		end = (char *)ft_calloc(1, 1);
		if (!end)
			return (NULL);
		return (end);
	}
	while (*q && contains(set, *q) != 0)
		q++;
	if (*q == '\0')
		return (q);
	while (end != s1 && contains(set, *end))
		end--;
	return (ft_substr(q, 0, (size_t)(end - q + 1)));
}

// int main()
// {
// 	char s1[] = "   xxx   xxx";
// 	char *sol;
// 	sol = ft_strtrim(s1, " x");
// 	printf("%s\n",sol);

// }