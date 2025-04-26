/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:35:51 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 20:35:54 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// int main()
// {
//     char c = 0;

//     while(c < 127)
//     {
//         printf(" %c > %c :", c, ft_toupper(c));
//         if(c % 5 == 0)
//             printf("\n");
//         c++;
//     }
//     return (0);
// }