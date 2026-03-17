/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:21:22 by mifranci          #+#    #+#             */
/*   Updated: 2026/03/09 15:40:49 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(lst))
		return ;
	del(lst->content);
	del(lst);
}

/*int main(int argc, char **argv)
{
	t_list *node = ft_lstnew(malloc(5));
	ft_lstdelone(node, free);
	node = NULL;
	ft_lstdelone(node, free);
	return (0);
}*/