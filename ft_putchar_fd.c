#include "libft.h"

void ft_putchar_fd(char c, int fd)
{   
    int i;

    i = 0;
    while(i < fd)
    {
        write(1, &c, fd);
        i++;
    }
}
// int main(void)
// {

// }