/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:36:02 by coutinho          #+#    #+#             */
/*   Updated: 2026/03/19 01:46:55 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		sign;
	int		res;

	ptr = (char *)nptr;
	sign = 1;
	res = 0;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
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