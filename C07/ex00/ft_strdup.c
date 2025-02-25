/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:56:19 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/24 13:29:44 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	size_t	len;

	copy = NULL;
	len = ft_strlen(src) + 1;
	copy = (char *) malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
/*#include <stdio.h>
int main()
{	
	char chaine[] = "une copie";
	char *copie;
	
	copie =  ft_strdup(chaine);

	printf("la copie contient :%s\n", copie);

	free(copie);
}*/
