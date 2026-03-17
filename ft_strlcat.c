/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 02:33:21 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/06 18:32:17 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t b_to_copy;
	size_t i;
	size_t j;
	size_t len;
	
	if (dsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst) + ft_strlen(src);
	b_to_copy = dsize - ft_strlen(dst) - 1;
	// printf("b_to_copy = >%li<\n", b_to_copy);
	if ((long int)b_to_copy < 0)
	{
		b_to_copy = 0;
		return (ft_strlen(src) + dsize);
	}
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && b_to_copy > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
		b_to_copy--;
	}
	dst[i] = '\0';
	return (len);
}

/*int main()
{
	char dest[30];
	ft_memset(dest, 'C', 5);
	char *s = "AAAAAAAAA";
	

	printf("len = %li\n", ft_strlcat(dest, s, -1));
	
	printf("dest = >%s<\n", dest);
	int i = 0;
	while (dest[i])
	{
		printf("dest = %c\n", dest[i]);
		i++;
	}

	return 0;
}*/

/*int main()
{
	char *s;
	char dest[10] = "123";
	s = "456";
	printf("len = %li\n", ft_strlcat(dest, s, 0));
	
	printf("result = >%s<\n", dest);
	int i = 0;
	while (dest[i])
	{
		printf("result = %c\n", dest[i]);
		i++;
	}
	printf("qui\n");
	return 0;
}*/

/*size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	char *ptr1;
	const char *ptr2;
	int dst_len;
	if (dsize <= (size_t)(ft_strlen(dst)))
		return (ft_strlen((char *)src) + dsize);
	ptr1 = dst;
	ptr2 = src;
	dst_len = ft_strlen(dst);
	while (*ptr1)
		ptr1++;
	ft_memcpy(ptr1, ptr2, dsize - dst_len - 1);
	ptr1 += dsize - dst_len - 1;
	*ptr1 = '\0';
	return (dst_len + ft_strlen((char *)src));
}*/