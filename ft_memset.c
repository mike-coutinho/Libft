/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:54:44 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/18 11:24:50 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = c;
	return (s);
}

/*#include <stdio.h>
int main()
{
	char ar[5];
	ft_memset((void *)ar, 48, 3);
	printf("res = %s\n", ar);
	return 0;
}*/