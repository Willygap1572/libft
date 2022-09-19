/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:17:26 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:17:26 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = NULL;
	ret = (void *)malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, size * nmemb);
	return (ret);
}
