/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 12:06:21 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/01 15:39:21 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while ((*p1 || *p2) && n > 0 )
	{
		if ((unsigned char)*p1 != (unsigned char)*p2)
			return ((unsigned char)*p1 - (unsigned char)*p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}

/*int main(int argc, char const *argv[])
{
	printf("ft_strncmp = >%i<\n", ft_strncmp("3456", "345", -1));
	return 0;
}
*/