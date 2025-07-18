char    *ft_strncat(char *dest, char *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
#include<stdio.h>
int main()
{
    char dest[10] = "A";
    char src [26] = "nwar";
    printf("%s", ft_strncat(dest,src,2));
}