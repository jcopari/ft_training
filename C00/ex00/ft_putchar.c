/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:02:04 by jcopari-          #+#    #+#             */
/*   Updated: 2025/07/01 22:18:46 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escreva uma função que exiba o caractere passado como parâmetro.
//Funções autorizadas: Write. 

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	ft_putchar('d');
	return (0);
}
