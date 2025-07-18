int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 !='\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}


#include<stdio.h>
int main()
{
    printf("test 1 : %d\n" , ft_strcmp("H" , "H"));
    printf("test 1 : %d\n" , ft_strcmp("e" , "a"));
    printf("test 1 : %d\n" , ft_strcmp("a" , "e"));
}