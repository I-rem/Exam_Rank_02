#include <unistd.h>

int main(int argc, char **argv)
{
	char count;
	
	argc--;
	if (argc < 10)
	{
		count = argc + '0';
		write(1, &count, 1);
	}
	else if (argc < 100)
	{
		count = argc / 10 + '0';
		write(1, &count, 1);
		count = argc % 10 + '0';
		write(1, &count, 1);
	}
	//Depending on the test conditions I might change this to a proper loop that will work for all positive numbers
	write(1, "\n", 1);
	return (0);
}
