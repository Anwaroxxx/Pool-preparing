int    ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return 0;
    }
    else if (nb == 0 || nb == 1)
    {
        return 1;
    }
    return nb * ft_recursive_factorial(nb - 1);
}

#include<stdio.h>
int main()
{
    printf("factorial is --> %d", ft_recursive_factorial(5));
}