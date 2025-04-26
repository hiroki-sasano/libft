/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:34:59 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 20:35:02 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	else if (len == 0)
		return (NULL);
	while (i + needle_len <= len && haystack[i] != '\0')
	{
		j = 0;
		while (j < needle_len && haystack[i + j] == needle[j])
			j++;
		if (j == needle_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char haystack[] = "123ab1234567abc";
//     const char needle[] = "abc";

//     size_t len = 0;

//     printf("ft_    ;%s\n", ft_strnstr(haystack, needle, len));
//     printf("origine;%s\n", strnstr(haystack, needle, len));

//     return (0);
// }