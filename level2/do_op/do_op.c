#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		int result;
		if (*argv[2] == '+')
			result = num1 + num2;
		else if (*argv[2] == '-')
			result = num1 - num2;
		else if (*argv[2] == '*')
			result = num1 * num2;
		else if (*argv[2] == '/')
			result = num1 / num2;
		else if (*argv[2] == '%')
			result = num1 % num2;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
