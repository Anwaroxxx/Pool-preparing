#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char original[] = "Hello";
    char copy[10];
    ft_strcpy(copy, original);
    printf("%s", copy);
}