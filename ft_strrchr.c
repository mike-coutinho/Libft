/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:55:50 by mifranci          #+#    #+#             */
/*   Updated: 2026/02/25 12:05:23 by mifranci         ###   ########.fr       */
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
		if (ptr[len] == c)
			return (ptr);
		len--;
	}
	return (NULL);
}
