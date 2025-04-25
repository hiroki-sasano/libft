#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *result;

    i = 0;
    result = NULL;
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            result = (char *)&s[i];
        }
        i++;
    }
    if (c == '\0')
        return (char *)&s[i];
    return result;
}

// int main()
// {
//     const char s[] = "1234a678a9";
//     int c = 'a';

//     printf("%c : %s", c, ft_strrchr(s, c));

//     return 0;
// }