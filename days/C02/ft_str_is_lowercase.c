#include <unistd.h>
#include <stdio.h>
int  ft_str_is_lowercase(char *str)
{
    int i = 0;
    int imposter = 1;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (!(c >= 'a' && c <= 'z'))
        {
            imposter = 0;
            break;
        }
        i++;
    }
    return imposter;
}
int main()
{
    char test1[] = "anwar";
    char test2[] = "ZIPPO";
    char test3[] = "";

    printf("Test1: %s -> %d\n", test1, ft_str_is_lowercase(test1));
    printf("Test2: %s -> %d\n", test2, ft_str_is_lowercase(test2));
    printf("Test3: (empty) -> %d\n", ft_str_is_lowercase(test3));
}