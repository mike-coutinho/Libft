/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:38:05 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/25 14:57:14 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;
	(void)c;
	(void)n;
	ptr = (char *)s;
	return (ptr);
	
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr && (int)n > 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
