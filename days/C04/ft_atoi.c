int    ft_atoi(char *str)
{
    int sign = 1;
    int num = 0;
    while (*str == 9 || *str == 10 || *str == 11 ||*str == 12|| *str == 13 || *str == 32)
    {
        str++;
    }
    while( *str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return num * sign;
}
#include<stdio.h>
int main()
{
    printf("    123' gonna be %d\n",ft_atoi("    123"));
}