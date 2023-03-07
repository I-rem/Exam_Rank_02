size_t	ft_strspn(const char *s, const char *accept)
{
	int num = 0;
	int i = 0;
	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
			{
				num++;
				s++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (num);
	}
	return (num);
}
