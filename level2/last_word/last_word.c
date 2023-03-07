#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int len = 0;
		while (argv[1][len])
			len++;
		len--;
		while (argv[1][len] == ' ' || argv[1][len] == '\t')
			len--;
		while (argv[1][len] != ' ' && argv[1][len] != '\t')
		{
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}
