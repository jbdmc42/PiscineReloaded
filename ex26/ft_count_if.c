/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:26:26 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/07 14:38:51 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	times;
	int	i;

	times = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			times++;
		i++;
	}
	return (times);
}
