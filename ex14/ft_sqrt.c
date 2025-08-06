int	ft_sqrt(int nb)
{
	int	temp;
	int	i;

	i = 0;
	temp = nb / 2;
	while (i < 32)
	{
		if (temp * temp == nb)
			return (temp);
		else if ((temp + 1) * (temp + 1) == nb)
			return (temp + 1);
		else if ((temp - 1) * (temp - 1) == nb)
			return (temp - 1);
		else if (temp * temp > nb)
			temp -= temp / 2;
		else if (temp * temp < nb)
			temp += temp / 2;
		i++;
	}
	return (0);
}
