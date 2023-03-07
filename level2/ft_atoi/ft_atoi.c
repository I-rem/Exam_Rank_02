int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	
	while (str[i] != '\0' && str[i] == ' ' && str[i] == '\t')
		i++;
	if (str[i] = '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';	
		i++;
	}
	return (num * sign);
}
