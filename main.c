# include "libft.h"

int main()
{
    const char s1[] = "123a456b789c";
    const char set[] = "abc";

    char *result = ft_strtrim(s1, set);

    printf("%s\n", result);

    return 0;
}

/* ccw main.c -L. -lft

 cc main.c ./libft.a*/