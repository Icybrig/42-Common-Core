/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfang <lfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:44:13 by lfang             #+#    #+#             */
/*   Updated: 2026/11/12 15:59:16 by lfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char sep)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != sep && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == sep)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	word_length(const char *s, char sep)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != sep)
		len++;
	return (len);
}

static char	**free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		i;
	int		word_count;
	int		len;

	word_count = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	words[word_count] = NULL;
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		len = word_length(s, c);
		words[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!words[i])
			return (free_words(words, i));
		ft_strlcpy(words[i], s, len + 1);
		s += len;
		i++;
	}
	return (words);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "Hel,lo wo,rld";
// 	char	s2;
// 	char	**res;
// 	int		i;

// 	s2 = ',';
// 	i = 0;
// 	res = ft_split(s1, s2);
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }
