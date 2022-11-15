/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:17:45 by gde-andr          #+#    #+#             */
/*   Updated: 2022/11/15 18:45:57 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	check_size(long nc)
{
	int	i;

	i = 0;
	while (nc > 0)
	{
		nc /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		a;
	int		sizeaux;
	int		size;
	long	numero;
	char	c[10];

	if (n == 0)
		write(fd, "0", 1);
	numero = (long)n;
	if (numero < 0)
	{
		write(fd, "-", 1);
		numero = numero * (-1);
	}
	size = check_size(numero);
	sizeaux = size;
	while (numero > 0)
	{
		a = numero % 10;
		c[size - 1] = (char)a + 48;
		numero = (numero - a) / 10;
		size--;
	}
	write(fd, c, sizeaux);
}
