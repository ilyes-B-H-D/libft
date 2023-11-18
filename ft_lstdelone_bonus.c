/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-haj <iben-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:21:04 by iben-haj          #+#    #+#             */
/*   Updated: 2023/11/18 15:23:27 by iben-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
// #include <stdio.h>

// void	del(void *content)
// {
//     if (content)
//         free(content);
// }
// int	main(void)
// {
//     t_list *node = malloc(sizeof(t_list));
//     if (!node)
// 		return 0;

//     int *content = malloc(sizeof(int));
//     if (!content)
//     	return 0;

//     *content = 42;

//     node->content = content;
//     node->next = NULL;

//     printf("Before deletion: %d\n", *(int *)node->content);

//     ft_lstdelone(node, del);
//     // must segfault here
// 	if ((int *)node->content == NULL)
// 		printf("rien");
// 	else
// 		printf("no");

//     return (0);
// }