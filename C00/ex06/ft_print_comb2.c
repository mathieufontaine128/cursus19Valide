#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c,1);
}
void ft_putnbr(int nb)
{	
	if (nb >= 10)
		ft_putnbr(nb / 10);
	 ft_putchar( nb % 10 + '0'); 	 
}
void ft_print_comb2(  void )
{	
	int	i;
	int	j;

	i = 0;
	while( i < 100)
	{
		j = i + 1;
		while( j < 100)
		{	
			if(i < 10)
			{
				ft_putchar('0');
				ft_putchar(i + '0');
			}
			else
				ft_putnbr(i);
			ft_putchar(' ');
			if(j < 10)
			{
				ft_putchar('0');
				ft_putchar(j + '0');
			}
			else
				ft_putnbr(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
int main()
{
	ft_print_comb2();
}
