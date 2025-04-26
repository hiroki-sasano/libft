/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisasano <hsasano573@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:27:35 by hisasano          #+#    #+#             */
/*   Updated: 2025/04/26 22:18:35 by hisasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_parse_digits(const char *str, int *i, int signe, int *overflow)
{
	int	result;

	result = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && ((!signe
						&& (str[*i] - '0') > 7)
					|| (signe && (str[*i] - '0') > 8))))
		{
			*overflow = 1;
			if (signe)
				return (INT_MIN);
			return (INT_MAX);
		}
		result = result * 10 + (str[*i] - '0');
		(*i)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;
	int	overflow;

	i = 0;
	result = 0;
	signe = 0;
	overflow = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = 1;
		i++;
	}
	result = ft_parse_digits(str, &i, signe, &overflow);
	if (overflow)
		return (result);
	if (signe)
		return (-result);
	return (result);
}

// int	main(void)
// {
// 	int origine;
// 	int ft;
// 	char *s;

// 	// s = "-2147483647";
// 	// s = "4294967295";
// 	s = "-4294967295";
// 	// s = "0000000005";
// 	origine = atoi(s);
// 	ft = ft_atoi(s);
// 	printf("%s\n", s);
// 	printf("origine = %d\n", origine);
// 	printf("ft = %d\n", ft);

// 	return (0);
// }
