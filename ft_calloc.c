/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hisasano@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:28:16 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/05 13:11:29 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	size_t	max;
	void	*ptr;

	max = (size_t)-1;
	if (count == 0 || size == 0)
		return (malloc(1));
	else if (size > max / count)
		return (NULL);
	bytes = count * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, bytes);
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
//     char *str = (char *)ft_calloc(4, sizeof(char));

//     printf("%s", str);

//     return (0);
// }

/* SIZE_MAX = 18446744073709551615 */