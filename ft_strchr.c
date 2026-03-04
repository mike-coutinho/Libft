/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:51:15 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/01 15:03:11 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if ((unsigned char)*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if ((unsigned char)*ptr == (unsigned char)c)
		return (ptr);
	return (NULL);
}

/*int main()
{
	char s[] = "tripouille";
	printf("ft_strchr = >%s<\n", ft_strchr(s, 't'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'l'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 'z'));
	printf("ft_strchr = >%s<\n", ft_strchr(s, '\0' + 256));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 0 + 256));
	printf("ft_strchr = >%s<\n", ft_strchr(s, 't' + 256));
	return (0);
}
*/