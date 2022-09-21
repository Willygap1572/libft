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
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*q;
	int		i;

	
	while(*set)
	{
		i = 0;
		q = (char *)s1;
		while(ft_strchr(q, *set))
		{
			*q = '\0';
			i++;
			q++;
		}
		if (i == 0)
			break;
		set++;
	}
	return (q);
}

int main()
{
	char s1[] = "lorem ipsum dolor sit amet";
	ft_strtrim(s1, "te");
	printf("%s\n",s1);
}