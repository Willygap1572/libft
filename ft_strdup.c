/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:34:12 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:34:12 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		size;
	int		i;

	i = -1;
	size = ft_strlen(s);
	ret = (char *)malloc((size + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (++i < size)
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}
