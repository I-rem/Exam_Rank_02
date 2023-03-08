#include <unistd.h>

int main(int argc, char **argv)
{
	argc;
	int j = 1;
		while (j < argc)
		{
			int i = 0;
			while (argv[j][i])
			{
				while (argv[j][i] == ' ')
				{
					write(1, " ", 1);
					i++;
				}
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					argv[j][i] -= 32;
				write(1, &argv[j][i], 1);
					i++;
				while (argv[j][i] != ' ' && argv[j][i] != '\0')
				{
					if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
						argv[j][i] += 32;
					write(1, &argv[j][i], 1);
					i++;
				}
			}
			j++;
			write(1, "\n", 1);
		}
	return (0);
}
