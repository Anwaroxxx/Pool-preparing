int ft_strncmp(char *s1, char *s2 , unsigned int n)
{
  int i;
    while (*s1 && *s2 !='\0' && *s1 == *s2 && i < n)
    {
      i = 0;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}


#include<stdio.h>
int main()
{
    printf("test 1 : %d\n" , ft_strncmp("Hello" , "Hello", 4));
    printf("test 1 : %d\n" , ft_strncmp("Aallo" , "Ballo", 2));
    printf("test 1 : %d\n" , ft_strncmp("Hella" , "Hello", 3));
}