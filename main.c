# include "libft.h"

int main()
{
	int	s = 12345;

	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return -1;
	
	ft_putnbr_fd(s, fd);

	return 0;
}
/* ccw main.c -L. -lft

 cc main.c ./libft.a*/