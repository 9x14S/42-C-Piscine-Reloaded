int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		while (*argv[i + 1])
			ft_putchar(*argv[i + 1]++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
