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
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	q = (char *)malloc((s1_len + s2_len + 2) * sizeof(char));
	if (!q)
		return (NULL);
	ft_strlcpy(q, s1, s1_len + 1);
	ft_strlcat(q, s2, s1_len + s2_len + 1);
	q[s1_len + s2_len] = '\0';
	return (q);
}
