#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    put_nbr(int n)
{
    if (n >= 10)
    {
        put_nbr(n / 10);
        put_nbr(n % 10);
    }
    else
        ft_putchar(48 + n);
}

int     main(void)
{
    int     *c;
    int     *d;
    int     inta;
    int     intb;

    c = &inta;
    d = &intb;
    ft_ultimate_div_mod(13, 2, divi, modu);
    put_nbr(*c);
    ft_putchar('\n');
    put_nbr(*d);
    return (0);
}
