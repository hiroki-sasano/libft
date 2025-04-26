#include "libft.h"

int ft_isalnum(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
    (c >= '0' && c <= '9'));
}

// int main()
// {
//     char c = '1';

//     printf("%d", ft_isalnum(c));

//     return 0;
// }