/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:22:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/08 08:45:02 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int	numb1;
	int	numb2;

	numb1 = 3;
	numb2 = 5;

	printf("Au commencement numb1 valait %d et numb2 valait %d\n", numb1, numb2);
	ft_swap(&numb1, &numb2);
	printf("numb1 et numb2 swapirent numb1 devint %d et numb2 %d", numb1, numb2);

}*/
