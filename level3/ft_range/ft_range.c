 #include <stdlib.h>
int     *ft_range(int start, int end)
{
	int *result;
	result = (int *)malloc(sizeof(int) * (abs(end - start) + 1));
	int i = 0;
	while (i < abs(end - start) + 1)
	{
		if (end < start)
			result[i] = start - i;
		else
			result[i] = start + i;
		i++;
	}
	return (result);
}
