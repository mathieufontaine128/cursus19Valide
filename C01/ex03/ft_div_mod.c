/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:21:38 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/08 08:46:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int dividende;
	int diviseur;
	int divi;
	int modu;

	dividende = 5;
	diviseur = 2;
	ft_div_mod(dividende, diviseur,&divi, &modu);
	printf("a divise par b est egal a %d et %d",divi ,modu);
}*/
