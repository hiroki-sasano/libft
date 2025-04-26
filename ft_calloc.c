#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(1));
	else if (size > SIZE_MAX / count)
		return (NULL);
	bytes = count * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, bytes);
	return (ptr);
}

// int main()
// {
//     char *str = (char *)ft_calloc(4, sizeof(char));

//     printf("%s", str);

//     return (0);
// }