/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:12:10 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:12:10 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*aux;

	i = -1;
	while (++i < (int)n)
	{
		aux = str + i;
		*aux = c;
	}
	return (str);
}
