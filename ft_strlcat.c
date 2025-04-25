#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t srclen;
    size_t dstlen;
    size_t k;

    srclen = ft_strlen((char *)src);
    dstlen = ft_strlen(dst);
    k = 0;
    if(dstsize == 0)
        return srclen + dstlen;
    
    while(dstlen + k < dstsize - 1 && src[k] != '\0')
    {
        dst[dstlen + k] = src[k];
        k++;
    }

    if (dstlen + k < dstsize)
        dst[dstlen + k] = '\0';

    return  srclen + dstlen;
}

// int main()
// {
//     char dst[20] = "1234";
//     char src[] = "abcd";

//     size_t result = ft_strlcat(dst, src, 20);
//     printf("%zu\n", result);

//     return 0;
// }