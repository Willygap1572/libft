/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:35:39 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:35:39 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*q;
	char	*ret;

	q = (char *)str;
	ret = (char *)str;
	while (*q)
	{
		if (*q == c)
			ret = q;
		q++;
	}
	if (*ret != c && c != '\0')
		return (NULL);
	if (c == '\0' && *q == '\0')
		return (q);
	return (ret);
}
