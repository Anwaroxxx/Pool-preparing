char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int y = 0;

    if (to_find[0] == '\0')
    {
        return str;
    }
    while (str[i] != '\0')
    {
        j = 0;
        while (to_find[j])
        {

        }
    }
    return to_find;
}

#include <stdio.h>
int main()
{
    char src[50] = "Hello World ";
    char search[20]= "word";
    printf("%s", ft_strstr(src,search));
}