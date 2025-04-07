/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:35:28 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 14:10:50 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a < 123)
	{
		ft_putchar(a);
		a++;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */