/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:33:58 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 23:10:25 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    int j;
    char *str;

    len = ft_strlen(s1) + ft_strlen(s2);
    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return NULL;

    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';

    return str;
}

// int main()
// {
//     char s1[] = "12345";
//     char s2[] = "abcde";

//     char *result = ft_strjoin(s1, s2);

//     printf("%s", result);

//     return 0;
// }