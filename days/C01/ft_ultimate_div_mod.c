#include<unistd.h>
#include<stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

int main()
{
    int x = 10;
    int y = 5 ;
    int *p1 = &x;
    int *p2 = &y;
    ft_ultimate_div_mod(p1,p2);
    printf("division of a and y is : %d\n",*p1);
    printf("Modulus  of a and y is : %d\n",*p2);
}