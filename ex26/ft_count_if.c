int	ft_count_if(char **tab, int (*f)(char *))
{
	int	result;

	result = 0;
	while (*tab)
	{
		result += ((*f)(*tab) == 1);
		tab++;
	}
	return (result);
}
