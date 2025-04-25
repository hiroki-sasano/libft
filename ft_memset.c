
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;;
    size_t i;

    ptr = (unsigned char *)s; 
    i = 0;
    while(i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

// int main()
// {
//     char str[6] = "Hello";
    
//     printf("Before: %s\n", str);
//     ft_memset(str, '*', 3);
//     printf("After : %s\n", str);

//     return 0;
// }