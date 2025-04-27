/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:35:26 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/27 15:15:26 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(const char *s1, const char *set)
{
    int count;
    int i;
    int j;

    count = 0;
    i = 0;
    j = 0;
    while(set[i] != '\0')
    {
        j = 0;
        while(s1[j] != '\0')
        {
            if (s1[j] != set[i])
                count++;
            j++;
        }
        i++;
    }
    return count;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *temp;
    char *result;

    i = 0;
    j = 0;
    k = 0;
    while(set[i] != '\0')
    {
        j = 0;
        temp = ft_strdup(result);
        if(!temp)
            return NULL;
        while(s1[j] != '\0')
        {
            if (s1[j] != set[i])
            {
                temp[k] = s1[j];
                k++;
            }
            j++;
        }
        result = ft_strdup(temp);
        if(!result)
            return NULL;
        i++;
    }
    return result;
}
