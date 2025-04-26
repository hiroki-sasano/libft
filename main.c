# include "libft.h"

int main()
{
	const char *s = "01233456789";
	unsigned int  start = 4;

	size_t len = 7;

	char *result = ft_substr(s, start, len);

	printf("%s", result);

	return 0;
}

/*ccw main.c -L. -lft

 cc main.c ./libft.a*/