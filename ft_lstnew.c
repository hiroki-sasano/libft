/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:06:49 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/01 19:07:34 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	t_list *node =  ft_lstnew("abcde");

// 	if (node)
// 	{
// 		printf("%s\n", (char *)(node->content));
// 		printf("%c\n", *(char *)((node->content) + 2));
// 		free(node);
// 	}

// 	int i = 12345;

// 	node = ft_lstnew(&i);

// 	if (node)
// 	{
// 		printf("%p\n", (int *)(node->content));
// 		printf("%d\n", *(int *)(node->content));
// 		free(node);
// 	}
// 	return (0);
// }