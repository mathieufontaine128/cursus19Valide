/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:29:47 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/15 11:35:22 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char str1[100] = "abc";
	char str2[] = "def";
	char str3[] = "abc";
	printf("avec ft_strcat : %s\n",ft_strcat(str1, str2));
	printf("avec strcat : %s\n",strcat(str3, str2));	
}*/
