size_t ft_strcspn(const char *s, const char *reject)
{
	int num = 0;
	int i;
	while (*s)
	{
		i = 0;
		while (reject[i])
		{
			if (*s != reject[i])
				i++;
			else 
				return (num);
		}
		num++;
		s++;
	}
	return (num);
}
