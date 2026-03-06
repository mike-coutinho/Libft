/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:37:06 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/06 13:53:56 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int main()
{
	char res[] = "1234";
	ft_striteri(res, ft_subchr);
	printf("res = %s\n", res);
	ft_striteri(res, ft_showindex);
	printf("res = %s\n", res);
	return 0;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main()
{
	char res[] = "1234";
	ft_striteri(res, ft_subchr);
	printf("res = %s\n", res);
	ft_striteri(res, ft_showindex);
	printf("res = %s\n", res);
	return 0;
}*/