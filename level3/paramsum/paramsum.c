#include <unistd.h>

int main(int argc, char **argv)
{
	char count;
	count = argc - 1 + '0';
	write(1, &count, 1);
	write(1, "\n", 1);
	return (0);
}
