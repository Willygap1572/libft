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

static size_t	get_word_length(char const *s, char c)
{
	size_t	i;

	i = 0;
	//si empieza en c
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*get_word(char const *s, size_t word_len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((word_len + 1) * sizeof(char));
	while (i < (int)word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	count_words(const char *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	return (len + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	word_len;
	size_t	nwords;
	int		i;

	i = 0;
	nwords = count_words(s, c);
	matrix = (char **)malloc(nwords * sizeof(char *));
	if (!matrix)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		word_len = get_word_length(s, c);
		matrix[i] = get_word(s, word_len);
		s += word_len + 1;
		i++;
	}
	return (matrix);
}
