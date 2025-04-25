#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return c;
}

// int main()
// {
//     char c = 0;

//     while(c < 127)
//     {
//         printf(" %c > %c :", c, ft_toupper(c));
//         if(c % 5 == 0)
//             printf("\n");
//         c++;
//     }
//     return 0;
// }