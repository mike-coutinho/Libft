/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 00:28:56 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/19 01:41:55 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		words;

	words = count_words(s, c);
	res = malloc(sizeof(*res) * (words + 1));
	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		if (*s)
		{
			while (s[i] != c && s[i])
				i++;
			res[j++] = ft_strndup(s, i);
		}
		s += i;
	}
	res[words] = NULL;
	return (res);
}

/*int main(int argc, char const *argv[])
{
	char **res;


	res = ft_split("   ", ' ');

	int i = 0;
	while (res[i])
	{
		printf(">%s<\n", res[i]);
		i++;
	}
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return 0;
}*/