/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:55:40 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/24 19:12:19 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen((char *)src);
	while (i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	if (len > dsize)
		return (len);
	while (dst[i])i++;
	return (i);
}

/*
int main()
{
	char dest[10];
	char *src = "aaa";
	printf("res from ft = %li\n", ft_strlcpy(dest, src, 2)); 
	printf("%s\n", dest);
	return 0;
}*/
/*
size_t ft_strlcpy(char dst[], const char *src, size_t dsize)
{
	char tmp[dsize];
	int i = 0;
	while (i < dsize - 1)
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	dst = tmp;
	i = 0;

	return ((size_t)dst);
	
}
int main(int argc, char const *argv[])
{
	char dest[10];
	char *src = "hello";
	size_t dst = ft_strlcpy(dest, src, 10);
	printf("%s\n", dest);
	return 0;
}*/