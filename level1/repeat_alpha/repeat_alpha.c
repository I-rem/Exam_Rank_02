#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int j;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				for (j=0; j <= (argv[1][i] - 'a');j++)
					write(1, &argv[1][i], 1);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                for (j=0; j <= argv[1][i] - 'A';j++)
                    write(1, &argv[1][i], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
