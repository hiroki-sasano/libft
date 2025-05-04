/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:10:28 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/04 19:36:56 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_arr(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

char	*ft_get_word(const char *s, char c, int arrcount)
{
	int	i;
	int	start;
	int	end;
	int	word_count;

	i = 0;
	start = 0;
	end = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (word_count == arrcount)
			return (ft_substr(s, start, end - start));
		word_count++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		arrcount;
	int		size;
	char	**result;

	arrcount = 0;
	size = ft_count_arr(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
	{
		return (NULL);
	}
	while (arrcount < size)
	{
		result[arrcount] = ft_get_word(s, c, arrcount);
		arrcount++;
	}
	result[arrcount] = NULL;
	return (result);
}

// int	main(void)
// {
// 	const char	*s = "123,,,456,,,789";
// 	char		c;
// 	char		**result;
// 	int			i;

// 	c = ',';
// 	result = ft_split(s, c);
// 	i = 0;
// 	printf("%s, %c\n", s, c);
// 	while (result[i] != NULL)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
