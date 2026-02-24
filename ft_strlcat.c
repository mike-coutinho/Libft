/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coutinho <coutinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 02:33:21 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/24 23:23:03 by coutinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	char *ptr1;
	const char *ptr2;
	if (dsize <= (size_t)(ft_strlen(dst) + 1))
		return (ft_strlen(dst) + dsize - 1);
	ptr1 = dst;
	ptr2 = src;
	while (*ptr1)
		ptr1++;
	ft_memcpy(ptr1, ptr2, dsize);
	ptr1 += dsize - ft_strlen(dst);
	*ptr1 = '\0';
	return (ft_strlen(dst));
}