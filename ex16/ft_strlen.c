/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:38:12 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/04 13:38:12 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", ft_strlen(argv[1]));
		return (0);
	}
	return (0);
}*/