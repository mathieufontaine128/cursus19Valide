/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 06:43:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/25 12:15:11 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total += ft_strlen(sep);
		i++;
	}
	return (total);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	if (size == 0)
	{
		tab = (char *)malloc(1);
		if (!(tab))
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = (char *)malloc(ft_total_len(size, strs, sep) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = '\0';
	while (i < size)
	{
		ft_strcat (tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main()
{
	char *tableau[]= {"lol","pouic","","youpii"};
	char coupe[] = "xx";
	int taille = 8;
	char *tabresult = ft_strjoin(taille, tableau, coupe);
	printf("%s\n", tabresult);
	free(tabresult);

}*/
