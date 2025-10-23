void ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = n;
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    if (nbr > 9)
        ft_putnbr_fd(nbr / 10, fd);
    ft_putchar_fd((nbr % 10)+ '0', fd);
}