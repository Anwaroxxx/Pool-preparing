#include <unistd.h>
#include <stdio.h>
int  ft_str_is_printable(char *str)
{
    int i = 0;
    int imposter = 1;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (!(c >= '!' && c <= '~'))
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
    char test2[] = "12345";
    char test3[] = "!@#$=";
    char test4[] = "     ";
    char test5[] = "";

    printf("Test1: %s -> %d\n", test1, ft_str_is_printable(test1));
    printf("Test2: %s -> %d\n", test2, ft_str_is_printable(test2));
    printf("Test3: %s -> %d\n", test3, ft_str_is_printable(test3));
    printf("Test4: %s -> %d\n", test4, ft_str_is_printable(test4));
    printf("Test5: (empty) -> %d\n",ft_str_is_printable(test5));
}