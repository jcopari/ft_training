/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 21:24:22 by jcopari-          #+#    #+#             */
/*   Updated: 2025/06/30 13:35:33 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int nbr)
{
	if (nbr < 0)
	{
		write (1, "N\n", 2);
	}
	else
	{
		write (1, "P\n", 2);
	}
}

int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	return (0);
}