int ft_sqrt(int nb)
{
    int i ;
    i = 0 ;
    if (nb <= 0)
    {
        return 0;
    }
    while (i * i <= nb)
    {
        if(i * i == nb)
        {
            return i;
        }
        i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    printf("Sqrt is --> %d\n", ft_sqrt(16));
    printf("Sqrt is --> %d\n", ft_sqrt(-25));
    printf("Sqrt is --> %d\n", ft_sqrt(0));
}