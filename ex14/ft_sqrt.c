/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:36:51 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 13:36:52 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while ((n * n) <= nb)
	{
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}

/* int	main(void)
{
	ft_sqrt(9);
	return (0);
}  */