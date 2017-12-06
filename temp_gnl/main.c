#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft/libft.h"

int		main(int ac, char **av)
{
	char	**line;
	int		fd;
	int		check;

	line = NULL;
	if (ac != 2)
		ft_putendl("Error: invalid file name");
	else if (!(line = (char**)ft_memalloc(sizeof(char*))))
		ft_putendl("Error: malloc failed");
	else
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			ft_putendl("Error: failed to open file");
		else
		{
			while (1)
			{
				check = get_next_line(fd, line);
				ft_putendl("Function returns:");
				ft_putnbr(check);
				ft_putchar('\n');
				ft_putendl(*line);
				if (check == 0)
					break;
			}
		}
	}
	return (0);
}
