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
int ft_find_next_prime(int nb)
{
    if (nb <= 2)
    {
        return 2;
    }
    if (ft_is_prime(nb) == 1)
    {
        return nb;
    }
    while (ft_is_prime(nb) == 0)
    {
        nb++;
    }
    return nb;
}
#include<stdio.h>
int main()
{
    printf("16 is prime ? 8====D %d\n", ft_find_next_prime(16));
    printf("2 is prime ? 8====D %d\n", ft_find_next_prime(14));
    printf("0 is prime ? 8====D %d\n", ft_find_next_prime(5));
    printf("-6 is prime ? 8====D %d\n", ft_find_next_prime(-6));
}