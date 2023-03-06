char    *ft_strrev(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	len--;
	int i = 0;
	char temp;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
}
