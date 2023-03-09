unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	else
	{
		int hcf = 1;
		int i = 2;
		while (i <= a && i <= b)
		{
			if (a % 2 == 0 && b % 2 == 0)
				hcf = i;
			i++;
		}
		return (abs(a * b) / hcf);
	}	
}
