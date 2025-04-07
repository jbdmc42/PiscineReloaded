/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:36:34 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 13:36:34 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int a = 10, b = 5, div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("DIV: %d\nMOD: %d", div, mod);
	return (0);
} */