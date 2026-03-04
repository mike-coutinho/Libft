/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:27:46 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/03 12:26:03 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char *ptrhay;
	size_t count;
	size_t nbr;
	
	ptrhay = (char *)haystack;
	count = 0;
	nbr = n;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (*ptrhay && nbr > 0)
	{
		if ((ft_strncmp(ptrhay, needle, ft_strlen((char *)needle)) == 0) && ((count + ft_strlen((char *)needle)) <= n))
			return (ptrhay);
		count++;
		ptrhay++;
		nbr--;
	}
	return (NULL);
}
