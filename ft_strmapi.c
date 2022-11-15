/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:49:14 by gde-andr          #+#    #+#             */
/*   Updated: 2022/11/15 18:40:47 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*q;

	i = 0;
	q = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!q)
		return (NULL);
	while (s[i])
	{
		q[i] = f(i, s[i]);
		i++;
	}
	return (q);
}
