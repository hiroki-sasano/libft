#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }

    return 0;
}

// int main()
// {
//     size_t n = 5;

//     const char *s1 = "12345";
//     const char *s2 = "12344";

//     int result = ft_strncmp(s1, s2, n);
//     int result_1 = strncmp(s1, s2, n);

//     printf("%d : %d\n", result, result_1);
//     return 0;
// }