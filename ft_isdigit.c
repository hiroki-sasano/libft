#include "libft.h"

int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return c;
    else
        return 0;
}

// int main()
// {
//     char c = 'a';

//     printf("%d", ft_isdigit(c));

//     return 0;
// }