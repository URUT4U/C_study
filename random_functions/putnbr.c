#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
	return ;
}


// TEST AREA //
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nb = atoi(argv[1]);

	ft_putnbr(nb);
	printf("\ntest PRINTF: %d\n", nb);
	return (0);
}
