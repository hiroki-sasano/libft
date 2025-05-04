/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:31:24 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/04 12:07:39 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main()
// {
//     int test_chars[] = {'0', '5', '9', 'a', 'Z', '!', ' ', 31, 127};
// 	size_t i = 0;

// 	while(i < sizeof(test_chars) / sizeof(test_chars[0]))
// 	{
// 		int c = test_chars[i];
// 		printf("  '%c'  |     %d      |   %d\n",
// 			(c >= 32 && c <= 126) ? c : '?', 
// 			ft_isprint(c),
// 			isprint(c));
// 		i++;
// 	}

//     return (0);
// }