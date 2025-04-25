#include "libft.h"

// int my_strlen(const char *str)
// {
//     int i;

//     i = 0;
//     while(str[i] != '\0')
//         i++;
//     return i;
// }

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t needle_len;
    
    i = 0;
    needle_len = ft_strlen((char *)needle);
    if (len == 0 || *needle == '\0')
    {
        return (char *)haystack;       
    }
    while(i + needle_len <= len && haystack[i] != '\0')
    {
        j = 0;
        while(j < needle_len && haystack[i + j] == needle[j])
        j++;

        if(j == needle_len)
            return (char *)&haystack[i];
        i++;
    }

    return NULL;
}

// int main()
// {
//     const char haystack[] = "123ab1234567abc";
//     const char needle[] = "abc";

//     printf("ft_    ;%s\n", ft_strnstr(haystack, needle, 15));
//     printf("origine;%s\n", strnstr(haystack, needle, 15));

//     return 0;
// }