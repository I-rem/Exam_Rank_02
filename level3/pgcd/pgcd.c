#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		
		int i = 1;
		int hcd = 1;
		while (i <= a || i <= b)
		{
			if (a % i == 0 && b % i == 0)
				hcd = i;
			i++;
		}
		printf("%d\n", hcd);
	}
	
	else
		write(1, "\n", 1);
	return (0);
}
