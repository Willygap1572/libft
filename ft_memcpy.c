/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:30:05 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:30:05 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*q1;
	unsigned char	*q2;
	int				i;

	i = -1;
	if (!dest && !src)
		return (dest);
	q1 = (unsigned char *)src;
	q2 = (unsigned char *)dest;
	while (++i < (int)n)
		q2[i] = q1[i];
	return (q2);
}
