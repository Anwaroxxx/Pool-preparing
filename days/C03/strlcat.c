unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int original_dest_len;
    int i = 0;

    while (dest[dest_len] != '\0')
        dest_len++;    // 5
    while (src[src_len] != '\0')
        src_len++;// 3

    original_dest_len = dest_len; // 5
    if (size == 0)
        return src_len;
    if (size <= dest_len)
        return size + src_len;
    while (src[src_len] != '\0' && dest_len < size - 1)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
    dest[i] = '\0';
    return original_dest_len + src_len;
}
#include<stdio.h>
int main()
{
    char dest[6]= "Anwar";
    char src[4]= "Gay";
    printf("%d", ft_strlcat(dest,src,7));
}