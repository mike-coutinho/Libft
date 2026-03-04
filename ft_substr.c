/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:34:54 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/03 21:38:32 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t s_len;
	
	s_len = ft_strlen(s);
	
	if (start >= len || start > s_len)
	{
		ptr = malloc(sizeof(char) * 2);
		if (start > ft_strlen(s) || (start == 0 && len == 0))
			return (ft_strdup(""));
		else
			ft_strlcpy(ptr, s + start, 1);
		ptr[1] = '\0';
	}
	else
	{
		
		if (s_len - start != len)
		{
			if (len > ft_strlen(s))
				len = ft_strlen(s);
			ptr = malloc(sizeof(char) * ((len) + 1));
			
			ft_strlcpy(ptr, s + start, (len));
		}
		else
		{
			ptr = malloc(sizeof(char) * ((s_len - start) + 1));
			ft_strlcpy(ptr, s + start, (s_len - start));
		}
		ptr[(s_len - start)] = '\0';
	}
	return (ptr);
}

/*int main(int argc, char const *argv[])
{
	printf(">%s<\n", ft_substr("tripouille", 0, 42000));
	printf(">%s<\n", ft_substr("tripouille", 1, 1));
	printf(">%s<\n", ft_substr("BONJOUR LES HAR ICOTS !", 8, 3));
	printf(">%s<\n", ft_substr("test", 1, 2));

	return 0;
}
*/


/*char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t s_len;
	
	s_len = ft_strlen(s);
	
	if (start >= len || start > s_len)
	{
		ptr = malloc(sizeof(char) * 2);
		if (start > ft_strlen(s) || (start == 0 && len == 0))
			return (ft_strdup(""));
		else
			ptr = ft_strlcpy(ptr, s + start, 1);
		ptr[1] = '\0';
	}
	else
	{
		
		if (s_len - start != len)
		{
			if (len > ft_strlen(s))
				len = ft_strlen(s);
			ptr = malloc(sizeof(char) * ((len) + 1));
			
			ptr = ft_strlcpy(ptr, s + start, (len));
		}
		else
		{
			ptr = malloc(sizeof(char) * ((s_len - start) + 1));
			ptr = ft_strlcpy(ptr, s + start, (s_len - start));
		}
		ptr[(s_len - start)] = '\0';
	}
	return (ptr);
}*/