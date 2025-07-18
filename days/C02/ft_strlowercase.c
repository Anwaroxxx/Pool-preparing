#include<unistd.h>
#include<stdio.h>

char    *ft_strlowercase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'A'&& c <= 'Z')
        {
            str[i]+= 32;
        }
        i++;
    }
    return  str;
}
int main()
{
    char test1[] = "ANWARR";
    char test2[] = "L7WAA DWA";

    printf("Test1: %s\n", ft_strlowercase(test1));
    printf("Test2: %s\n", ft_strlowercase(test2));
}