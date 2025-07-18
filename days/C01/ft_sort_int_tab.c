#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int	i;
    int	swap;

    while (size >= 0)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab [i];
                tab[i] = tab [i + 1];
                tab [i + 1] = swap;
            }
            i++;
        }
        size--;
    }
}
#include <stdio.h>
int main()
{
    int arr[]={8,2,7,4,1};
    int elem = 5;
    int i = 0;
    ft_sort_int_tab(arr, elem);
    i = 0;
    while (i < elem)
    {
        printf("%d", arr[i]);
        i++;
    }
}
