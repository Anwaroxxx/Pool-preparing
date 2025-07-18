int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return -1;
    }
    if (index == 0)
    {
        return 0;
    }
    else if(index == 1)
    {
        return 1;
    }
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

#include<stdio.h>
int main()
{
    printf("Fibonacci is --> %d\n", ft_fibonacci(7));
    printf("Fibonacci is --> %d\n", ft_fibonacci(-5));
    printf("Fibonacci is --> %d\n", ft_fibonacci(0));
}