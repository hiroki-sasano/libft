/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:06:49 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/01 17:34:31 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list *ft_lstnew(void *content)
{
    
}