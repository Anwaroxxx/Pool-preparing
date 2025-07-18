int    ft_iterative_power(int nb, int power)
{
        int storing = 1;

    if(power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }
    while (power > 0)
    {
        storing = storing * nb;
        power--;
    }
    return storing;
}
#include<stdio.h>
int main()
{
    printf("result is --> %d", ft_iterative_power(0,0));
}