#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			char temp = argv[1][i];
			write (1, &temp, 1);
			if (argv[1][i + 1] >= 'A' && argv[1][i + 1] <= 'Z')
			{
				write(1, "_", 1);
				argv[1][i + 1] += 32;
			}
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
