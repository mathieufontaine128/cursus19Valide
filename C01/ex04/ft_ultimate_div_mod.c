/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:22:34 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/08 08:49:15 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}
/*int	main()
{
	int a;
	int b;

	a = 8;
	b = 3;
	printf("Si a = %d et b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a / b = %d et a %% b = %d", a, b);
}*/
