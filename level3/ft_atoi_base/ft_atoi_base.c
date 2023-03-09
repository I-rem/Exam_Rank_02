int	ft_atoi_base(const char *str, int str_base)
{
	char hex[16] = "0123456789abcdef";
	int sign = 1;
	int num = 0;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str)
	{
		num *= str_base;
		if (*str >= '0' && *str <= '9')
			num += *str - '0';
		else
			num += *str - 'a' + 10;
		str++;
	}
	return (num);
}
