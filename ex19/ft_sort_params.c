#define TEMP_STORAGE 0

static void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

static int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static void	ft_sort_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				argv[TEMP_STORAGE] = argv[i];
				argv[i] = argv[j];
				argv[j] = argv[TEMP_STORAGE];
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		return (-1);
	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
