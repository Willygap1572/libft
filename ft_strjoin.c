/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:33:31 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:33:31 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*q;
	int		i;
	int		j;

	j = -1;
	i = -1;
	q = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!q)
		return (NULL);
	while (++i && s1[i])
		q[i] = s1[i];
	while (++j && s2)
		q[i + j] = s2[j];
	q[i + j] = '\0';
	return (q);
}
