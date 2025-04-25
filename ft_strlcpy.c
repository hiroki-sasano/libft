#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(src[i] != '\0')
    {
        i++;
    }

    if(dstsize == 0)
        return i;

    while(j < dstsize - 1 && src[j] != '\0')
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return i;
}

// int main()
// {
//     size_t i = 5;
//     char src[] = "12345\0";
//     char dst[i];

//     size_t j = ft_strlcpy(dst, src, i);

//     printf("%zu", j);

//     return 0;
// }