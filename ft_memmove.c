/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:01:51 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 19:01:52 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*q1;
	char			*q2;
	unsigned char	*q3;
	int				i;

	i = -1;
	q1 = (unsigned char *)src;
	q2 = (char *)malloc(n * sizeof(n));
	q3 = (unsigned char *)dest;
	while (++i < (int)n)
		q2[i] = q1[i];
	i = -1;
	while (++i < (int)n)
		q3[i] = q2[i];
	free(q2);
	return (q3);
}
