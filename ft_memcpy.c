#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{

    size_t i;
    unsigned char *d;
    unsigned char *s;

    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    while(i < n)
    {
        d[i] = s[i];
        i++;
    }

    return dst;
}

// int main()
// {
//     char dst[20];
//     char src[] = "abcde";

//     ft_memcpy(dst, src, 3);

//     printf("%s", dst);

//     return 0;
// }