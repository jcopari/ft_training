/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:34:41 by jcopari-          #+#    #+#             */
/*   Updated: 2025/07/01 22:18:42 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escreva uma função que exiba o alfabeto em minúsculas, numa única linha, em
// ordem crescente, começando pela letra ’a’.

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write (1, &letra, 1);
		letra++;
	}
	//write (1, "\n", 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
