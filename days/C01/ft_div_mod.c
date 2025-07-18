#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int main()
{
    int num1 = 20;
    int num2 = 0;
    int *x = &num1;
    int *y = &num2;
    ft_div_mod(num1, num2, &num1, &num2);
    if(num2 != 0)
    {
        printf("a divided by b is %d\n", num1);
        printf("a Modulus of b is %d\n", num2);
    }
}