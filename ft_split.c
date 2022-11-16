/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-andr <gde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:29:45 by gde-andr          #+#    #+#             */
/*   Updated: 2022/09/18 18:29:45 by gde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	word_count(char const *s, char c)
{
	char	*q;
	size_t	n;

	if (*s == '\0')
		return (0);
	n = 0;
	q = (char *)s;
	while(*q)
	{
		if (*q == c)
		{
			n++;
			while (*q == c)
			{
				q++;
			}
		}
		q++;
	}
	return (n + 1);
}

char	*word_alloc_fill(char **s, char c)
{
	char	*word;
	char	*tmp;
	int		n;

	n = 0;
	tmp = *s;
	while (*tmp != c && *tmp != '\0')
	{
		n++;
		tmp++;
	}
	while (*tmp == c)
		tmp++;
	word = ft_substr((*s),0, n);
	(*s) = tmp;
	return (word);
}

void	free_matrix(char **matrix, int size)
{
	while (size)
		free(matrix[size--]);
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		i;
	char	**matrix;
	char	*ite;

	i = 0;
	if (!s)
		return (NULL);
	ite = ft_strdup(s);
	ite = ft_strtrim(s, &c);
	n = word_count(ite, c);
	matrix = (char **)ft_calloc(n + 1, sizeof(char *));
	if (!matrix)
		return (NULL);
	while (i < n)
	{
		matrix[i] = word_alloc_fill(&ite, c);
		if (!matrix[i])
		{
			free_matrix(matrix, i);
			return (NULL);
		}
		i++;
	}
	//free(ite); por que esto no funciona¿?¿? 
	return (matrix);
}

// int main()
// {
// 	//char frase[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char	**matrix;
// 	int i;
// 	i = 0;
// 	matrix = ft_split("hola", ' ');
// 	if (matrix[0] == '\0')
// 		printf("Cadena vacia");

// 	while (i < 1 && matrix)
// 	{
// 		printf("%s\n", matrix[i]);
// 		i++;
// 	}
// 	free_matrix(matrix, 1);
// }