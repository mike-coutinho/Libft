/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:51:15 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/18 20:41:41 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if ((unsigned char)*s++ == (unsigned char)c)
			return ((char *)--s);
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	char s[] = "abcdefghj";
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'a'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'f'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'j'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'z'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, '\0'));
	return (0);
}*/