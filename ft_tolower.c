/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:35:42 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 20:35:45 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// int main()
// {
//     char c = 0;

//     while(c < 127)
//     {
//         printf(" %c > %c :", c, ft_tolower(c));
//         if(c % 5 == 0)
//             printf("\n");
//         c++;
//     }
//     return (0);
// }