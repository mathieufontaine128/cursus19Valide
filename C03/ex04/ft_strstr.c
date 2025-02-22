/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:19:59 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/16 11:55:25 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0'
			&& str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "";
	char str2[] = "cdef";
	char str3[] = "de";
	printf("%s", strstr(str2, str3));
	printf("\n");
	printf("%s", ft_strstr(str2, str3));
	printf("\n");
	printf("%s", ft_strstr(str1, str2));
}*/
