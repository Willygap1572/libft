/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:56:18 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/20 10:56:42 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (*dst != '\0' && dstsize)
	{
		dst++;
		dstsize--;
		dst_len++;
	}
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (dstsize == 0 || *src == 0)
		*dst = '\0';
	return (dst_len + src_len);
}
