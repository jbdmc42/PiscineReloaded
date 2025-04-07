/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:10:22 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/07 14:18:29 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
} */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/* int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7};
	int	asize = 7;
	ft_foreach(array, asize, &ft_putnbr);
	return (0);
} */