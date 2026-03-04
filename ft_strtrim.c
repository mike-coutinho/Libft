/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 23:50:28 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/04 00:19:51 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *ptr1;
	char *res;

	i = 0;
	ptr1 = (char *)s1;
	while (*ptr1)
	{
		if (ft_strchr(set, *ptr1))
			i++;
		ptr1++;
	}
	res = malloc(sizeof(char) * ((ft_strlen(s1) - i) + 1));
	ptr1 = res;
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
		{
			ptr1 = ft_memcpy(ptr1, s1, 1);
			ptr1++;
		}
		s1++;
	}
	*ptr1 = '\0';
	return (res);
}

/*int main()
{
	char *s1 = "abcs";
	char *set = "bc";
	char *res = ft_strtrim(s1, set);
	printf("res = %s\n", res);
	return 0;
}*/
