#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);

}
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int x;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;
ft_ultimate_ft(p9);
ft_putchar(x);
}