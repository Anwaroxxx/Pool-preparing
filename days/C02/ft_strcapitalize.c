#include<unistd.h>
#include<stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int capital = 1;
    while (str[i] != '\0')
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            if(capital)
            {
                if(str[i]>='a' && str[i]<='z')
                    str[i] -= 32;
                    capital = 0;
            }
            else
            {
                if(str[i] >='A' && str[i] <= 'Z')
                    str[i] += 32;
            }
        else
            capital = 1;
        i++;
    }
    return str;
}

int main()
{
    char test[] = "salut, comment tu vas ? 1337mots quanate-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(test));
}