/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:35:41 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 13:58:00 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		return ;
	}
	ft_putchar('P');
}

/* int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(7);
	ft_is_negative(2);
	ft_is_negative(0);
	return (0);
} */