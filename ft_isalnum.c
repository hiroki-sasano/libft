/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:28:52 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/04 12:04:10 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

// int main()
// {
//     int test_chars[] = {'0', '5', '9', 'a', 'Z', '!', ' ', -1, 128};
// 	size_t i = 0;

// 	while(i < sizeof(test_chars) / sizeof(test_chars[0]))
// 	{
// 		int c = test_chars[i];
// 		printf("  '%c'  |     %d      |   %d\n",
// 			(c >= 32 && c <= 126) ? c : '?', 
// 			ft_isalnum(c),
// 			isalnum(c));
// 		i++;
// 	}

//     return (0);
// }