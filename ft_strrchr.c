/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:50 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/19 01:40:50 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
		if ((unsigned char)s[len--] == (unsigned char)c)
			return ((char *)&s[++len]);
	return (NULL);
}

/*#include <stdio.h>
int main()
{
	char s[] = "abcdefgfahj";
	printf("ft_strchr = >%s<\n", ft_strrchr(s, 'a'));
	printf("ft_strchr = >%s<\n", ft_strrchr(s, 'f'));
	printf("ft_strchr = >%s<\n", ft_strrchr(s, 'j'));
	printf("ft_strchr = >%s<\n", ft_strrchr(s, 'z'));
	printf("ft_strchr = >%s<\n", ft_strrchr(s, '\0'));
	return (0);
}*/