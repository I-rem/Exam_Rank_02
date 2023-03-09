#include <unistd.h>

void puthex(int num)
{
	char hex[16] = "0123456789abcdef";
	if (num < 16)
		write(1, &hex[num], 1);		
	else 
	{
		puthex(num / 16);
		puthex (num % 16);	
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = 0;
		while (*argv[1])
		{
			num = num * 10 + *argv[1] - '0';
			argv[1]++;
		}
		puthex(num);
	}
	write(1, "\n", 1);
	return (0);
}
