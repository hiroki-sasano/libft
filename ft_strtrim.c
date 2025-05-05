/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hisasano@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:35:26 by hisasano          #+#    #+#             */
/*   Updated: 2025/05/05 15:37:37 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_rangedup(const char *s1, int start, int end)
{
	int		size;
	int		i;
	char	*result;

	size = end - start + 1;
	i = 0;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
	{
		return (NULL);
	}
	while (start <= end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}

static char	*ft_reardel(char const *s1, char const *set)
{
	int	size;
	int	i;

	size = ft_strlen(s1) - 1;
	if (size < 0)
	{
		return ((char *)ft_strdup(""));
	}
	while (size >= 0)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[size] == set[i])
			{
				size--;
				break ;
			}
			i++;
		}
		if (set[i] == '\0')
			break ;
	}
	return (ft_rangedup(s1, 0, size));
}

static char	*ft_frtdel(char *s1, char const *set)
{
	int		size;
	int		i;
	int		start;
	char	*result;

	size = (ft_strlen(s1) - 1);
	i = 0;
	start = 0;
	while (start <= size)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[start] == set[i])
			{
				start++;
				break ;
			}
			i++;
		}
		if (set[i] == '\0')
			break ;
	}
	result = ft_rangedup(s1, start, size);
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*reardel;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return ((char *)ft_strdup(""));
	reardel = ft_reardel(s1, set);
	if (!reardel)
		return (NULL);
	result = ft_frtdel(reardel, set);
	free(reardel);
	return (result);
}

// #include <stdio.h>

// void test_trim(char *s1, char *set)
// {
//     char *result = ft_strtrim(s1, set);
//     printf("s1    = \"%s\"\n", s1);
//     printf("set   = \"%s\"\n", set);
//     printf("result= \"%s\"\n", result);
//     printf("--------\n");
//     free(result);
// }
// int main()
// {
//     test_trim("-=-=---a-b=c-=-=---", "-=");   // normal
//     test_trim("", "-=");                      // 空文字
//     test_trim("----====---", "-=");           // 全部セット文字
//     test_trim("abcdef", "-=");                // セットに存在しない
//     test_trim("---abc---", "a-");             // 一部トリム
//     test_trim("123", "");                     // setが空
//     test_trim(NULL, "-=");                    // s1 NULL
//     test_trim("abc", NULL);
// }