#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t bytes;
    void *ptr;

    bytes = count * size;
    ptr = malloc(bytes);

    ft_memset(ptr, 0, bytes);

    return ptr;
}

// int main()
// {
//     char *str = (char *)ft_calloc(4, sizeof(char));

//     printf("%s", str);

//     return 0;
// }