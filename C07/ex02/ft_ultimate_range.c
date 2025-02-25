/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:56:31 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/25 11:26:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	i = 0;
	tab = (int *)malloc (len * sizeof(int));
	if (!(tab))
		return (-1);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (len);
}
/*#include <unistd.h> 
#include <stdio.h>
int main()
{
	int *tab;
	int size;
	int i;

	size = ft_ultimate_range(&tab, 1000,1006);
	
	i = 0;
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	write(1, "\n", 1);
	free(tab);
}*/
