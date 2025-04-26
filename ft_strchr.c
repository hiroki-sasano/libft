#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != (char)c)
    {
        if(s[i] == '\0')
        {
            return  NULL;
        }
        i++;
    }
    return (char *)&s[i];
}

// int main()
// {
//     const char s[] = "1234a6789";
//     int c = 'a';

//     printf("%c : %s", c, ft_strchr(s, c));

//     return 0;
// }