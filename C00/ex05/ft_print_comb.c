/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:38:52 by jcopari-          #+#    #+#             */
/*   Updated: 2025/07/01 22:09:47 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escreva uma função que exiba, em ordem crescente, todas as diferentes combinações
de três dígitos diferentes em ordem crescente - sim, a repetição é proposital.
• Isso resulta em algo do tipo:
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
• 987 fica de fora porque o 789 já está presente.
• 999 fica de fora porque o dígito 9 aparece mais de uma vez.
*/

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, &a[0], 1);
				write(1, &a[1], 1);
				write(1, &a[2], 1);
				if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
					write(1, ", " , 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
} 

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
