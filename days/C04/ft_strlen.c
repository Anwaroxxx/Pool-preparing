#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    printf("Len is %d", ft_strlen("li7wak"));
}
