#include "libft.h"

int ft_isalpha(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main()
// {
//     char c = 'a';

//     printf("%d\n", ft_isalpha(c));

//     return 0;
// }