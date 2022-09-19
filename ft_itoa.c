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

static int	sizen(int num)
{
	int	size;

	size = 0;
	while (num >= 1)
	{
		size++;
		num /= 10;
	}
	return (size);
}

char	*ft_itoa(int num)
{
	char	*ret;
	int		size;
	int		nflag;

	nflag = 0;
	if (num < 0)
	{
		nflag = 1;
		num *= -1;
	}
	size = sizen(num);
	if (nflag == 1)
		size++;
	ret = (char *)malloc(size * sizeof(char));
	if (nflag == 1)
		ret[0] = '-';
	while (num >= 1)
	{
		ret[size - 1] = (num % 10) + '0';
		num /= 10;
		size--;
	}
	return (ret);
}
