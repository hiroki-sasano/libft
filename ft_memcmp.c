#include <stdio.h>
#include <string.h>

 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    const unsigned char *ptr1;
    const unsigned char *ptr2;
    ptr1 = (const unsigned char *)s1;
    ptr2 = (const unsigned char *)s2;
    size_t i;

    i = 0;
    while(i < n)
    {
        if (ptr1[i] != ptr2[i])
            return ptr1[i] - ptr2[i];
        i++;
    }
    return 0;
 }

//  int main()
//  {
//     const char s1[] = "123456789";
//     const char s2[] = "123456879";
//     size_t i = 0;
    
//     printf("my    : %d\n", ft_memcmp(s1, s2, i));
//     printf("orgine: %d\n", memcmp(s1, s2, i));

//     return 0;
//  }