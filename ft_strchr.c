#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            return  (char *)&s[i];
        }
        i++;
    }
    return NULL;
}

// int main()
// {
//     const char s[] = "1234a6789";
//     int c = 'a';

//     printf("%c : %s", c, ft_strchr(s, c));

//     return 0;
// }