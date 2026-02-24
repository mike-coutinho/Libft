/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:48:51 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/24 19:45:31 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
	const char *ptr2;
	char array[ft_strlen((char *)s2)];
	int i;

	ptr2 = s2;
	i = 0;
	while (i > ft_strlen((char *)s2))
	{
		array[i] = ptr2[i];
		i++;
	}
	return (ft_memcpy(s1, array, n));
}