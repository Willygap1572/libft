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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*q;
	size_t	len;

	while (*s1 && ft_strrchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	q = ft_substr(s1, 0, len + 1);
	q[len] = '\0';
	return (q);
}
