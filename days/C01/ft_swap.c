#include<unistd.h>

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
/*#include<stdio.h>
int main()
{
    int num1 = 1;
    int num2 = 2;
    int *x = &num1;
    int *y = &num2;
    printf("Before\n");
    printf("x = %d\n", num1);
    printf("y = %d\n", num2);
    printf("After\n");
    ft_swap(x,y);
    printf("x = %d\n", num1);
    printf("y = %d\n", num2);
}
    */