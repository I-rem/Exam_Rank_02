#include <unistd.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	if (argc >= 2)
	{
		int i = 0;
		while (*argv[1] == ' ' || *argv[1] == '\t')
			argv[1]++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		int wordcount = 1;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				wordcount++;
				write(1, " ", 1);
			}
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			write(1, &argv[1][i], 1);
			i++;
		}
		if (wordcount > 1)
			write(1, " ", 1);
		while (*argv[1] != ' ' && *argv[1] != '\t' && *argv[1] != '\0')
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
