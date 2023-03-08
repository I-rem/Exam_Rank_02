#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int *result;
	int size = abs(end - start) + 1;
	result = (int *)malloc(sizeof(int) * size);
	size--;
	while (size >= 0)
	{
		result[size] = start; 
		if (end > start)
			start++;
		else
			start--;
		size--;
	}
	return (result);
}
