/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:25:01 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:25:01 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static int	sizen(int num)
{
	int	size;

	size = 0;
	while (num >= 1 || num <= -1)
	{
		size++;
		num /= 10;
	}
	return (size);
}

char	*ft_itoa(int num)
{
	int		size;
	char	*ret;

	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648LL)
		return (ft_strdup("-2147483648"));
	size = sizen(num);
	if (num < 0)
		size++;
	ret = (char *)ft_calloc(size + 1, sizeof(char));
	if (num < 0)
	{
		num *= -1;
		ret[0] = '-';
	}
	while (num >= 1 && size > 0)
	{
		ret[--size] = (num % 10) + '0';
		num /= 10;
	}
	return (ret);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(10));
// }
