/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:51:55 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/16 11:58:46 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	//char str1[] = "";
	char str2[] = "abc";
	char str3[] = "abd";
	//printf("%d\n", strncmp(str2, str3, -3));
        printf("%d\n",ft_strncmp(str2, str3,-3));
}*/
