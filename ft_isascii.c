#include <stdio.h>
#include <ctype.h>

int     ft_isascii(int c)
{
    return  (c >= 0 && c <= 127);
}

// int main()
// {
//     int c = 1;

//     printf("%d\n", isascii(c));
    
//     return 0;
// }