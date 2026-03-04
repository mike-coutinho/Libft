/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:50 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/03 15:33:22 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	int len;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	while (len >= 0)
	{
		if ((unsigned char)ptr[len] == (unsigned char)c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}

/*int main()
{
	char s[] = "tripouille";
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 't'));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 'l'));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 'z'));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, '\0' + 256));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 0 + 256));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 0));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, '\0'));
	printf("ft_strrchr = >%s<\n", ft_strrchr(s, 't' + 256));
	return (0);
}*/