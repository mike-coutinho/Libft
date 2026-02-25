/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:48:51 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/25 17:51:29 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
	printf("ft_memmove = %s\n", (char *)s2);
	const char *ptr2;
	char array[n];
	size_t i;

	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		array[i] = ptr2[i];
		i++;
	}
	return (ft_memcpy(s1, array, n));
}
