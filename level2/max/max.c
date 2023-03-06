int max(int* tab, unsigned int len)
{
	len--;
	int max = tab[len];
	while (len > 0)
	{
		if (tab[len - 1] > max)
			max = tab[len - 1];
		len--;
	}
	return (max);
}

