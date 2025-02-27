/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 07:17:59 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/26 08:45:56 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	interrupteur;

	j = size - 1;
	interrupteur = 1;
	while (interrupteur)
	{
		i = 0;
		interrupteur = 0;
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab [i + 1];
				tab [i + 1] = temp;
				interrupteur = 1;
			}
			i++;
		}
		j--;
	}
}
/*#include <stdio.h>
int main()
{
	int i = 0;
	int size = 5;
	int tab[6] = {-147483648, 2, 9, 147483647, 0};

	while(i < size)
	{
		printf("%d  ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	printf("\n");
	i = 0;
	while(i < size)
	{
		printf("%d  ", tab[i]);
		i++;
	}
}*/
