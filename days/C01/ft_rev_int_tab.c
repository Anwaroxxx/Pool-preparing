#include <unistd.h>
#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size - 1;
    int temp;

    while (i < j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}


int main()
{
    int arr[]={1,2,3,4,5};
    int elem = 5;
    int i = 0;
    while (i < elem)
    {
        printf("%d", arr[i]);
        i++;
    }

    printf("\n");

    ft_rev_int_tab(arr, elem);
    i = 0;
    while (i < elem)
    {
        printf("%d", arr[i]);
        i++;
    }
}
