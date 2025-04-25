#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
        unsigned    char *d;
        const unsigned char *s;
        size_t i;

        d = (unsigned char *)dst;
        s = (const unsigned char *)src;
        i = 0;
        if(!dst || !src)
            return NULL;
        if(s == d || len == 0)
            return dst;
        if(d < s)
        {
            while(i < len)
            {
                d[i] = s[i];
                i++;
            }
        }
        else
        {
            i = len;
            while(i > 0)
            {
                d[i - 1] = s[i - 1];
                i--;
            }
        }
        return dst;
}

// int main() {
//     char str[] = "0123456789";
//     char str_2[] = "0123456789";
    
//     // 部分的に重なる領域へのコピー
//     printf("Before_ft : %s\n", str);
//     printf("Before : %s\n", str_2);
//     ft_memmove(str + 6, str, 5);
//     memmove(str_2 + 6, str_2, 5);
//     printf("After_ft :  %s\n", str);
//     printf("After :  %s\n", str_2);

//     return 0;
// }