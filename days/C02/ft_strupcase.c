#include<unistd.h>
#include<stdio.h>

char    *ft_strupcase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        char c = str[i];
        if (c >= 'a'&& c <= 'z')
        {
            str[i]-= 32;
        }
        i++;
    }
    return  str;
}
int main()
{
    char test1[] = "anwar";
    char test2[] = "zippo";

    printf("Test1: %s\n", ft_strupcase(test1));
    printf("Test2: %s\n", ft_strupcase(test2));
}