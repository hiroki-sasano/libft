# include "libft.h"

int	main(void)
{
	const char	*s = "123,,,456,,,789";
	char		c;
	char		**result;
	int			i;

	c = ',';
	result = ft_split(s, c);
	i = 0;
	printf("%s, %c\n", s, c);
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

/* ccw main.c -L. -lft

 cc main.c ./libft.a*/