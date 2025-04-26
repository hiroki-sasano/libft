/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:34:05 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 20:34:08 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	while (dstlen + i < dstsize - 1 && src[i] != '\0')
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

// int main()
// {
//     char dst[20] = "123456";
//     char dst_2[20] = "123456";
//     char src[] = "abcd";
//     char src_2[] = "abcd";

//     size_t x = 0;

//     size_t result = ft_strlcat(dst, src, x);
//     size_t result_2 = strlcat(dst_2, src_2, x);
//     printf("%zu\n", result);
//     printf("%zu\n", result_2);

//     return (0);
// }