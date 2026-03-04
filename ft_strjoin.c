/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:20:58 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/03 23:49:39 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr1;
	char *res;

	ptr1 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	res = ptr1;
	ptr1 = ft_memcpy(ptr1, s1, ft_strlen(s1));
	ptr1 = ft_memcpy(ptr1 + ft_strlen(s1), s2, ft_strlen(s2));
	ptr1 = ft_memcpy(ptr1 + ft_strlen(s2), "\0", 1);

	return (res);
}

/*int main()
{
	char *s1 = " a ";
	char *s2 = "a\0a";
	char *res = ft_strjoin(s1, s2);
	printf("res = >%s<\n", res);
	return 0;
}*/