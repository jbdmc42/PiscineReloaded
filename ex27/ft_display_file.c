/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:48:00 by joaobarb          #+#    #+#             */
/*   Updated: 2025/04/07 16:27:29 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_write_file(char *filename)
{
	int		fd;
	int		br;
	char	buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 19);
		return ;
	}
	br = read(fd, &buffer, 1);
	while (br > 0)
	{
		write(1, &buffer, 1);
		br = read(fd, &buffer, 1);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		write(2, "File name missing.\n", 20);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else if (argc == 2)
		ft_write_file(argv[1]);
	return (0);
}
