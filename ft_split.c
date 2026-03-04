/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 00:28:56 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/04 02:41:53 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char **res;
	char const *ptr1;
	int i;
	int j;
	int words;

	ptr1 = s;
	words = 0;
	while (*ptr1)
	{
		while (*ptr1 == c)
			ptr1++;
		if (*ptr1 != c && *ptr1)
			words++;
		while (*ptr1 != c && *ptr1)
			ptr1++;
	}
	res = malloc(sizeof(*res) * (words + 1));
	j = 0;
	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			while (s[i] != c && s[i])
				i++;
			res[j] = ft_strndup(s, i);
		}
		j++;
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


/*	res = ft_split("aaa", 'b');
	while (*res)
	{
		printf(">%s<\n", *res);
		res++;
	}*/