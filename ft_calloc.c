/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:27:10 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/13 19:30:00 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb * size == 0)
		return (malloc(0));
	if (nmemb * size > 2147483647 || nmemb * size < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int main()
{
	char *ptr;
	printf("ft_calloc = >%p<\n", ptr = ft_calloc(5, 3));
	free(ptr);
	printf("ft_calloc = >%p<\n", ptr = ft_calloc(5, 0));
	free(ptr);
	printf("ft_calloc = >%p<\n", ptr = ft_calloc(-5, -5));
	ptr = ft_calloc(-5, -5);
	free(ptr);
	return 0;
}
*/