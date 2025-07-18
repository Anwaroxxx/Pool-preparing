#include<unistd.h>
#include<stdio.h>
unsigned int ft_strlcpy	(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int len = 0;
    while (src[len] != '\0')
    {
        len++;
    }
    if (size == 0)
    {
        return len;
    }
    while (src[i] !='\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return len;
}

int main()
{
    char origi[] = "HAMSTR";
    char copy[7];
    unsigned int result;
    result = ft_strlcpy(copy,origi,7);
    printf("%s\n", copy);
    printf("%d",result );
}
