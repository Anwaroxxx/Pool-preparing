int ft_is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
    {
        return 0;
    }
    while (i < nb)
    {
        if (nb % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
#include<stdio.h>
int main()
{
    printf("5 is prime ? --> %d\n", ft_is_prime(5));
    printf("8 is prime ? --> %d\n", ft_is_prime(8));
    printf("0 is prime ? --> %d", ft_is_prime(0));
}
