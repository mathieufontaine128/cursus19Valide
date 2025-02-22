/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:59:23 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/20 09:59:36 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*# include <stdio.h>
int main(void)
{
    printf("%d\n", ft_recursive_power(-1, -1));
    printf("%d\n", ft_recursive_power(0, -1));
    printf("%d\n", ft_recursive_power(1, -1));
    printf("%d\n", ft_recursive_power(0, 0));
    printf("%d\n", ft_recursive_power(-1, 1));
    printf("%d\n", ft_recursive_power(-1, 2));
    printf("%d\n", ft_recursive_power(1, 1));
    printf("%d\n", ft_recursive_power(2, 2));
    printf("%d\n", ft_recursive_power(2, 10));
    printf("%d\n", ft_recursive_power(5, 3));
    printf("%d\n", ft_recursive_power(2, 0));
}*/
