#include "libft.h"

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
    //     return c;
    // else
    //     return 0;
}

// int main()
// {
//     char c = '0';

//     printf("%d\n", ft_isdigit(c));
//     printf("%d\n", isdigit(c));

//     return 0;
// }