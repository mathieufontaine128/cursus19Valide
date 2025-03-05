#include <unistd.h>

void ft_putnbr(int nb)
{
	int i;
	char buffer[10];

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (nb == -2147483648)
	      {
	      	write(1, "-2147483648", 11);
		return;
	      }	

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
	buffer[i] = (nb % 10) + '0';  
	nb /= 10;
	i++;
	}
	while(i > 0)
	{
		i--;
		write (1, &buffer[i], 1);
	}

}
int main()
{
	ft_putnbr(2147483647);
}
