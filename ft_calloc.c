/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hisasano@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:28:16 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/06 11:23:23 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(1));
	else if (size > SIZE_MAX / count)
		return (NULL);
	bytes = count * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, bytes);
	return (ptr);
}

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    size_t count = SIZE_MAX / 2 + 1;
    size_t size = 2;

	void *ptr_1 = ft_calloc(count, size);

    void *ptr = calloc(count, size);

    if (!ptr)
        puts("✅ calloc returned NULL (overflow detected)");
    else
        puts("⚠️ calloc succeeded (unexpected)");

	if (!ptr_1)
        puts("✅ ft_calloc returned NULL (overflow detected)");
    else
        puts("⚠️ ft_calloc succeeded (unexpected)");
    return 0;
}

/* SIZE_MAX = 18446744073709551615 */