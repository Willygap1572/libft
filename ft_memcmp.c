/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:28:13 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:28:13 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*q1;
	unsigned char	*q2;
	int				i;

	if ((int)n == 0)
		return (0);
	i = 0;
	q1 = (unsigned char *)s1;
	q2 = (unsigned char *)s2;
	while (i < (int)n && q1[i] == q2[i])
		i++;
	if (i == (int)n)
		return (q1[i - 1] - q2[i - 1]);
	return (q1[i] - q2[i]);
}
