/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viperetz <viperetz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:08:44 by viperetz          #+#    #+#             */
/*   Updated: 2025/02/09 18:11:30 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if ((x < 1) || (y < 1))
		return ;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1) && ((j == 1) || (j == x)))
				ft_putchar('A');
			else if ((i == y) && ((j == 1) || (j == x)))
				ft_putchar('C');
			else if ((i != 1) && (i != y) && (j != 1) && (j != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
