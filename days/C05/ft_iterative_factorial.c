int    ft_iterative_factorial(int nb)
{
    int num = 1;

    if(nb < 0)
    {
        return 0;
    }
    if (nb == 0)
    {
        return 1;
    }
    while (nb > 0)
    {
        num = num * nb;
        nb--;
    }
    return num;
}
#include<stdio.h>
int main()
{
    printf("factorial is --> %d", ft_iterative_factorial(1));
}