/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:38:04 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 13:57:02 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		return (0);
	}
	return (0);
}*/