/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 06:44:10 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/26 09:11:57 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*#include<stdio.h>
int main ()
{
	int x = 5;
	int k = 0;
	int tableau [5] = {-2147483648,2, 3, 4, 2147483647};

	while (k < x)
	{
		printf("%d ", tableau[k]);
		k++;
	}
	ft_rev_int_tab(tableau, x);
	printf("\n");
	k = 0;
	while (k < x)
	{
		printf("%d ", tableau[k]);
		k++;
	}
	
}*/
