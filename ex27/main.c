#include <unistd.h> // write, read, close
#include <fcntl.h>  // open, O_RDONLY

#define BUFSIZE 0x800

int		read_loop(int fd)
{
	int		total;
	int		read_amount;
	char	buffer[BUFSIZE];

	total = 0;
	read_amount = read(fd, buffer, BUFSIZE);
	while (read_amount > 0)
	{
		total += read_amount;
		write(1, buffer, read_amount);
		read_amount = read(fd, buffer, BUFSIZE);
	}
	return (total);
}

int		handle_file(char *filepath)
{
	int	fd;

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
		return (3);
	(void)read_loop(fd);
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (write(2, "File name missing.\n", 19) / 10);
	else if (argc > 2)
		return (write(2, "Too many arguments.\n", 20) / 10);
	return (handle_file(argv[1]));
}
