/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coutinho <coutinho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:36:02 by coutinho          #+#    #+#             */
/*   Updated: 2026/02/25 19:51:51 by coutinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int ft_atoi(const char *nptr)
{
	char *ptr;
	int sign;
	int res;

	ptr = (char *)nptr;
	sign = 1;
	res = 0;
	while (*ptr == ' ')
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		res = (res * 10) + (*ptr - '0');
		ptr++;
	}
	return (res * sign);
}

/*int main()
{
	printf("%i\n", ft_atoi("-2147483648"));
}*/