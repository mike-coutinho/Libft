/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:11:49 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/19 00:50:57 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
