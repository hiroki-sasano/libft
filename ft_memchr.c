#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *ptr;
    ptr = (const unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
        {
            return (void *)&ptr[i];
        }
        i++;
    }
    return NULL;
}

// int main()
// {
//     char str[] = "abcdefg";
//     char *result = ft_memchr(str, 'e', 7);

//     if (result)
//         printf("fonnd: %c\n", *result);
//     else
//         printf("not fonnd\n");
    
//     return 0;
// }