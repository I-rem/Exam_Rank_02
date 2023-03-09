#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 2;
		int num = 0;
		num = atoi(argv[1]);
		if (num == 1)
			printf("1\n");
		else
		{
			while (i <= num)
			{
				if (is_prime(i) && num % i == 0)
				{
					printf("%d", i);
					num /= i;
					if (num != 1)
						printf("*");
					i--;
				}
				i++;
			}
			printf("\n");
		}
	}
	else
		write(1, "\n", 1);
}
