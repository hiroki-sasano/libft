/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:47:05 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/25 13:01:02 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen((char *)s1);
	i = 0;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}

/*
int	main(void)
{
	const char	s1[] = "12345";
	char		*result;

	result = ft_strdup(s1);
	printf("%s\n", result);
	return (0);
}
*/