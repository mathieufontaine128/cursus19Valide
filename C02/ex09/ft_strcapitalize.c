/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:04:37 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/11 11:52:53 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_alphanum(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A' ) && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!(ft_is_alphanum(str[i])))
		{
			i++;
		}
		while (ft_is_alphanum(str[i]))
		{
			if (((str[i] >= 'a') && (str[i] <= 'z'))
				&& (!(ft_is_alphanum(str[i - 1]))))
				str[i] -= 32;
			if (((str[i] >= 'A') && (str[i] <= 'Z'))
				&& (ft_is_alphanum(str[i - 1])))
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
