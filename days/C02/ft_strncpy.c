#include <unistd.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while( i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main()
{
    char original[] = "1337";
    char copy[10];
    int i = 0;
    ft_strncpy(copy, original, 7);
    printf("Copied string : ");
    while (i < 10)
    {
        if (copy[i] == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("%c", copy[i]);
        }
        i++;
    }
    printf("\n");
}
