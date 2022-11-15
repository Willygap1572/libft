/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:27:38 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:27:38 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*q;
	int		i;

	i = -1;
	q = (char *)str;
	while (++i < (int)n)
	{
		if (*q == c)
			return (q);
		q++;
	}
	return (NULL);
}
