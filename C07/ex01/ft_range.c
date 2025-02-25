/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:33:37 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/24 13:52:26 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	i = 0;
	tab = (int *)malloc (len * sizeof(int));
	if (!(tab))
		return (NULL);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
int main ()
{	
	int i = 0;
	int min = 1000;
	int max = 1012;
	int len = max - min;
	int *tableau;
	
	tableau = ft_range(min, max);
	while(i < len)
	{
	       printf("%d\n", tableau[i]);
	       i++;
	}
	free (tableau);
}*/
