/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:36:48 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:36:48 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		j;

	j = -1;
	if (start > ft_strlen(s) - 1)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	while (++j < (int)len && s[j + start])
		str[j] = s[j + start];
	str[j] = '\0';
	return (str);
}
