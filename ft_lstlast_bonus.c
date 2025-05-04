/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:05:50 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/01 23:19:49 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list node_arr[10];
// 	t_list *head = &node_arr[0];
// 	char *nums[] = {"zero", "one", "two", "three", "four",
// 		"five", "six", "seven", "eight", "nine"};

// 	int i = 0;

// 	while (i < 10)
// 	{
// 		node_arr[i].content = nums[i];
// 		node_arr[i].next = (i < 9) ? &node_arr[i + 1] : NULL;
// 		i++;
// 	}
//     t_list *result = ft_lstlast(head);
//     printf("%s\n", (char *)result->content);

// 	return (0);
// }