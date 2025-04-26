#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	signe;

	i = 0;
	result = 0;
	signe = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > INT_MAX / 10)
		{
			if (signe)
				return INT_MIN;
			else
				return INT_MAX;
		}
		else if (result == INT_MAX / 10)
		{
			if ((!signe && (str[i] - '0') > 7) || (signe && (str[i] - '0') > 8))
			{
				if (signe)
					return INT_MIN;
				else
					return INT_MAX;
			}
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (signe)
		return (-result);
	else
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
//	s = "0000000005";
// 	origine = atoi(s);
// 	ft = ft_atoi(s);
// 	printf("%s\n", s);
// 	printf("origine = %d\n", origine);
// 	printf("ft = %d\n", ft);

// 	return (0);
// }