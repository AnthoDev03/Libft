int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 1;
	while ((nptr[i] == 32) || ((nptr[i] >= 9) && (nptr[i] <= 13)))
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			minus = minus * -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * minus);
}
