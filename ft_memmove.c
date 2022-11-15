/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:01:51 by gde-andr          #+#    #+#             */
/*   Updated: 2022/11/15 18:23:41 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*q1;
	char			*q2;
	int				i;

	i = -1;
	if (!dest && !src)
		return (dest);
	q1 = (unsigned char *)src;
	q2 = (char *)dest;
	if (dest > src)
		while (n-- > 0)
			q2[n] = q1[n];
	else
		while (++i < (int)n)
			q2[i] = q1[i];
	return (q2);
}
